# Fiche projet — Équipe 20

> Livrable L2 · Jalon J1 (samedi 29 août 2026) · validée par l'encadreur référent.
> Aucune fabrication n'est autorisée avant la validation de ce jalon.

## 1. Titre et accroche

**Robot Éducatif  plateforme mobile multi-capteurs**

Un robot à 2 roues que les élèves programment eux-mêmes pour suivre une ligne, éviter des obstacles, et afficher en temps réel ce que perçoivent ses capteurs (son, lumière, distance) — un support concret pour apprendre la logique de commande et la mesure physique.

## 2. Besoin et bénéficiaires

L'initiation à la robotique et à la programmation embarquée manque souvent de support concret et réutilisable dans les établissements : peu de matériel abordable permet de manipuler à la fois mécanique, capteurs et code sur un même objet. Un robot éducatif modulaire, conservé au FabLab ou au club de robotique, offre un support réutilisable d'année en année pour enseigner la prise de décision algorithmique à partir de données physiques réelles.

- **Élèves concernés** : élèves du club sciences/technologie ou d'une classe de technologie/informatique, niveau collège ou lycée
- **Discipline d'usage** : technologie et algorithmique, avec un ancrage possible en physique-chimie (son, lumière, distance) pour l'exploitation des mesures affichées
- **Établissement / lab d'accueil** : INFPP Lomé

## 3. Objectifs d'apprentissage

1. **Algorithmique.** Écrire une boucle de décision conditionnelle qui ajuste le comportement du robot (avancer, tourner, s'arrêter) à partir de plusieurs capteurs lus en continu. *(chapitre du programme officiel à préciser par l'équipe)*
2. **Physique appliquée.** Expliquer le principe de mesure d'un capteur à ultrasons (temps de vol d'une onde réfléchie) et comparer les valeurs de deux capteurs identiques montés sur le robot.
3. **Électronique de commande.** Décrire le rôle d'un driver moteur (pont en H) dans le pilotage en vitesse et en sens de rotation d'un moteur à courant continu.

## 4. Description du dispositif

**Ce que l'objet fait** : le robot suit une ligne au sol grâce à ses capteurs infrarouges, s'arrête ou évite un obstacle détecté par les capteurs à ultrasons, et affiche en continu sur son écran les valeurs mesurées par ses capteurs annexes (niveau sonore ambiant, luminosité). Des LED et un buzzer signalent l'état du robot (marche, alerte, obstacle). Un bouton poussoir active le robot ; les autres boutons peuvent servir à changer de mode d'affichage ou de comportement.

**Ce que l'élève en fait** : il câble le circuit sur breadboard, programme la logique de décision (suivi de ligne, évitement, affichage), et compare en conditions réelles les mesures des capteurs doublés (ultrason, microphone, luminosité) — une occasion concrète de discuter de la fiabilité et de la redondance d'une mesure.

**Note sur les capteurs en double exemplaire** : le driver moteur, les capteurs à ultrasons, les microphones et les capteurs de lumière sont prévus en 2 exemplaires chacun dans la liste de l'équipe. C'est une marge de rechange en cas de casse.
**Croquis** : à réaliser et à verser dans `docs/medias/` avant validation du jalon (schéma du châssis, position des capteurs, de l'écran et des boutons).

## 5. Architecture technique et liste des composants

| Composant | Rôle | Quantité |
|---|---|---|
| Carte ESP32-S3 | Contrôleur principal | 1 |
| Châssis robot 2 roues + moteurs DC | Structure mobile et motorisation | 1 kit |
| Driver moteur (L298N ou TB6612FNG) | Pilotage des moteurs DC | 2 |
| Capteurs infrarouges (IR) suivi de ligne | Détection de la ligne au sol | 4 |
| Capteur à ultrasons (HC-SR04) | Détection d'obstacle / mesure de distance | 2 |
| Capteur microphone numérique (ICS-43434 ou MAX9814) | Mesure du niveau sonore ambiant | 2 |
| Écran d'affichage (OLED I2C ou LCD) | Affichage des valeurs mesurées | 1 |
| Capteur de lumière (photorésistance LDR / module) | Mesure de la luminosité ambiante | 2 |
| Buzzer (actif ou passif) | Signal d'alerte sonore | 3 |
| Pile 9V + support de pile | Alimentation | 2 |
| Bouton poussoir | Activation / changement de mode | 3 |
| Câbles jumpers (M-M, F-F, M-F) | Connexions sur breadboard | 2 lots |
| Breadboard | Prototypage du circuit | 2 |
| LED (diverses couleurs) | Voyants d'état et d'alerte | 10 |
| Résistances (220 Ω, 330 Ω, 10 kΩ, valeurs variées) | Limitation de courant LED, pont diviseur LDR | 20 |
| Câble USB de programmation | Liaison ordinateur ↔ carte | 1 |

**Procédés de fabrication envisagés** (exigence ET-FAB-02 : au moins 3 procédés distincts) : [à préciser par l'équipe — probable : découpe laser ou impression 3D pour un habillage/support de capteurs sur le châssis, à confirmer selon ce que le kit châssis inclut déjà]

## 6. Rôle des élèves

Position principale sur le continuum : **PAR** — les élèves conçoivent et programment eux-mêmes la logique de décision du robot (suivi de ligne, évitement, affichage), et conduisent la comparaison des capteurs doublés.

## 7. Ancrage réseau et implantation

- **Lab de rattachement** : [à préciser]
- **Lieu d'usage** : salle de classe ou club robotique, avec un parcours de ligne au sol à préparer pour les tests
- **Conditions matérielles** : sol plat pour le suivi de ligne, éclairage ambiant à prendre en compte pour le calibrage du capteur de lumière

## 8. Périmètre

| | Contenu |
|---|---|
| Dans la v1.0 (Socle) | Suivi de ligne fonctionnel, arrêt sur obstacle détecté par ultrason, activation par bouton, LED d'état |
| En option (Avancé / Expert) | Affichage en continu des mesures (son, lumière, distance) sur l'écran ; comparaison des deux capteurs redondants ; évitement actif (contournement plutôt que simple arrêt) |
| Explicitement exclu | [à préciser par l'équipe — ex. navigation autonome complexe, reconnaissance vocale, connexion réseau] |

## 9. Risques et parades

| Risque | Type | Parade |
|---|---|---|
| La pile 9V peut ne pas fournir assez de courant pour alimenter à la fois les moteurs et l'électronique de commande | technique | Prévoir une alimentation séparée pour les moteurs si la pile 9V montre des signes de faiblesse (redémarrages, moteurs faibles) |
| Inversion de polarité sur le driver moteur | technique | Vérifier le câblage avant chaque mise sous tension ; disposer d'un 2ᵉ driver en rechange (déjà prévu dans la liste) |
| Capteur de lumière et microphone sensibles aux conditions ambiantes de la salle | technique | Calibrer les seuils dans les conditions réelles d'utilisation, comme pour tout capteur analogique |
| Écran, capteurs ou câbles jumpers endommagés en cours de manipulation | matériel | Quantités prévues avec marge (2 breadboards, 2 lots de jumpers, 10 LED, 20 résistances) ||

## 10. Budget matière estimé

*À chiffrer par l'équipe auprès du magasin du FabLab — plafond indicatif : 60 000 FCFA.*

| Poste | Estimation (FCFA) |
|---|---|
| Capteurs (IR, ultrason, microphone, LDR) | [à chiffrer] |
| Écran, boutons, buzzers, LED, résistances | [à chiffrer] |
| Piles, breadboards, jumpers, câble USB | [à chiffrer] |
| **Total estimé** | [à chiffrer] |

## 11. Licences et diffusion

Code proposé sous licence libre (MIT, cohérente avec le fichier `LICENSE` du dépôt). Documentation et plans proposés sous licence Creative Commons BY-SA (cohérente avec `LICENSE-DOCS` et `LICENSE-HARDWARE`).
