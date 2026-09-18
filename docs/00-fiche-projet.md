# Fiche projet — Équipe 20

> Livrable L2 · Jalon J1 (samedi 29 août 2026) · validée par l'encadreur référent.
> Aucune fabrication n'est autorisée avant la validation de ce jalon.
> **Version mise à jour le 16 septembre 2026** pour refléter le dispositif final, après plusieurs itérations matérielles documentées dans le journal (voir notamment l'entrée du 12 septembre).

## 1. Titre et accroche

**Robot Éducatif — évitement d'obstacle télécommandé, avec affichage de distance en temps réel**

Un robot à 2 roues qui détecte les obstacles par ultrason, les évite automatiquement par une manœuvre de rotation signalée par une LED, affiche la distance mesurée en temps réel sur un écran, et reste pilotable à tout moment par télécommande.

## 2. Besoin et bénéficiaires

L'initiation à la robotique et à la programmation embarquée manque souvent de support concret et réutilisable dans les établissements. Un robot éducatif compact, combinant mesure physique (distance), décision automatique (évitement) et retour visuel immédiat (écran, LED), offre un support réutilisable pour enseigner la logique de décision conditionnelle à partir de données de capteur réelles.

- **Élèves concernés** : élèves du club sciences/technologie ou d'une classe de technologie, niveau collège ou lycée
- **Discipline d'usage** : technologie et algorithmique
- **Établissement / lab d'accueil** : INFPP Lomé

## 3. Objectifs d'apprentissage

1. **Algorithmique.** Écrire une boucle de décision conditionnelle qui compare une mesure de distance à un seuil et déclenche une manœuvre d'évitement.
2. **Physique appliquée.** Expliquer le principe de mesure d'un capteur à ultrasons (émission, écho, temps de vol) à partir de la valeur affichée en temps réel sur l'écran du robot.
3. **Électronique de puissance.** Décrire le rôle d'un driver moteur (pont en H) et la nécessité de séparer l'alimentation de puissance des moteurs de l'alimentation logique — enseignement tiré directement de l'incident du 12 septembre 2026 (voir `docs/04-securite/analyse-risques.md`).

## 4. Description du dispositif
**Ce que l'objet fait** : le robot avance et mesure en continu la distance à l'obstacle le plus proche grâce à un capteur à ultrasons. Tant que la voie est libre, la LED rouge reste éteinte. Dès que le robot détecte un obstacle, la LED rouge s'allume. Un récepteur de télécommande permet à tout moment de commander le robot (marche, arrêt, avance) indépendamment de la logique automatique d'évitement.


**Ce que l'élève en fait** : il observe la correspondance entre la valeur affichée à l'écran et le comportement réel du robot, règle le seuil de déclenchement de l'évitement, et peut reprendre la main par télécommande pour comparer pilotage manuel et comportement autonome.

**Croquis** : Le schéma du dispositif est téléversé dans docs/medias/.

## 5. Architecture technique et liste des composants

| Composant | Rôle | Quantité |
|---|---|---|
| Carte ESP32 DevKit | Contrôleur principal | 1 |
| Châssis robot 2 roues + moteurs DC | Structure mobile et motorisation | 1 kit |
| Driver moteur TB6612FNG | Pilotage des 2 moteurs DC | 1 |
| Capteur à ultrasons HC-SR04 | Détection d'obstacle / mesure de distance | 1 |
| Écran OLED I2C | Affichage de la distance en temps réel | 1 |
| Récepteur infrarouge + télécommande | Pilotage manuel du robot | 1 |
| Bouton poussoir | Activation / changement de mode | 1 |
| LED rouge | Voyant « obstacle détecté » (fixe), puis clignotant pendant la rotation d'évitement | 1 |
| Résistance (220 Ω pour la LED) | Limitation de courant | 1
/ |
| Accumulateurs Li-ion 7,4 V (2 éléments en série) | Alimentation dédiée du rail moteur | 1 pack |
| Câbles jumpers, breadboard | Câblage de prototypage | selon besoin |


## 6. Rôle des élèves

Les élèves conçoivent, câblent et programment eux-mêmes la logique de décision (seuil de distance, manœuvre d'évitement) et le partage entre pilotage automatique et pilotage par télécommande.

## 7. Ancrage réseau et implantation

- **Lieu d'usage** : salle de classe ou club robotique, sol plat dégagé pour les tests de déplacement
- **Conditions matérielles** : zone de test dégagée d'au moins quelques mètres, accumulateurs chargés à l'avance

## 8. Périmètre

| | Contenu |
|---|---|
| Dans la v1.0 (Socle) | Mesure de distance en continu, affichage temps réel sur écran, évitement automatique avec signalisation LED, pilotage par télécommande |
| En option (Avancé / Expert) | Réglage du seuil d'évitement par télécommande plutôt que dans le code |
| Explicitement exclu | Microphone, capteur de lumière (LDR), buzzer — retirés du périmètre final après les itérations matérielles de début septembre |

## 9. Risques et parades

Voir `docs/04-securite/analyse-risques.md` pour le tableau complet, incluant l'incident réel du 12 septembre 2026 (retour de tension USB ayant endommagé la carte mère de l'ordinateur de programmation) et les mesures de séparation des rails d'alimentation désormais appliquées.

## 10. Budget matière estimé

*À chiffrer par l'équipe — plafond indicatif : 60 000 FCFA.*

| Poste | Estimation (FCFA) |
|---|---|
| ESP32 DevKit, châssis + moteurs, driver TB6612FNG | [à chiffrer] |
| Capteur ultrason, écran OLED, récepteur IR + télécommande | [à chiffrer] |
| LED, résistances, bouton, câblage | [à chiffrer] |
| Accumulateurs Li-ion 7,4 V | [à chiffrer] |
| **Total estimé** | [à chiffrer] |

## 11. Licences et diffusion

Code proposé sous licence libre (MIT, cohérente avec le fichier `LICENSE` du dépôt). Documentation et plans proposés sous licence Creative Commons BY-SA (cohérente avec `LICENSE-DOCS` et `LICENSE-HARDWARE`).


## Exemptions demandées
