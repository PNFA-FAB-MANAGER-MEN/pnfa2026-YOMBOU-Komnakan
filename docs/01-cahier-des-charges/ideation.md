# Idéation

> Livrable L3 · Jalon J2. Trace des pistes explorées avant le choix du sujet :
> divergence, critères de tri, sujet retenu et motifs du rejet des autres.

## Critères de tri utilisés

Trois critères ont guidé la comparaison de toutes les pistes, du début à la fin de la recherche :

1. **Faisabilité technique** — niveau de prérequis, risques signalés, temps de fabrication tenable dans le calendrier, dépendance aux machines partagées du FabLab
2. **Pertinence éducative** — lien réel avec un besoin d'établissement ou un contenu de programme, bénéficiaire identifiable
3. **Richesse en compétences acquises** — diversité des procédés de fabrication mobilisés (exigence ET-FAB-02) et des notions techniques nouvelles

## Pistes explorées, dans l'ordre chronologique

| Piste | Origine | Ce qui a été retenu | Motif du rejet ou de l'abandon |
|---|---|---|---|
| P047 — Tableau d'appel visuel | Recueil des 150 projets | Meilleure pertinence éducative (accessibilité, Voie 1) et bonne faisabilité (Niveau 1) | Non rejetée sur le fond, mais l'équipe a préféré une piste combinant davantage de procédés de fabrication |
| P061 — Bras robotisé de tri | Recueil des 150 projets | Meilleure richesse de compétences (4 procédés : laser, impression, moulage, carte) | Projet démonstrateur de FabLab, sans apport concret installé pour un usager extérieur |
| P066 — Fontaine à eau filtrée supervisée | Recueil des 150 projets | Apport concret durable + richesse technique équivalente à P061 | Niveau 2, charge de maintenance (calibrage du capteur de turbidité) jugée lourde pour le calendrier |
| P124 — Détecteur de porte restée ouverte | Recueil des 150 projets | Très bonne faisabilité (Niveau 1, aucun risque réel) | Bénéficiaire limité à un usage interne de sécurité, pertinence éducative jugée faible |
| P139 — Alarme de niveau de bac | Recueil des 150 projets | Bonne faisabilité, notion intéressante de redondance de capteurs | Bénéficiaire = le FabLab lui-même, portée jugée trop restreinte |
| **P126 — Indicateur de niveau sonore de classe** | Recueil des 150 projets | **Choisi le 29 août** : Niveau 1, Voie 1 (dispositif didactique), pertinence forte (autorégulation du bruit de classe), enrichi d'un bouton Mode Cours propre à l'équipe | Abandonné ensuite au profit d'un projet jugé plus riche techniquement par l'équipe |
| Combinaison P137 (horloge parlante) + P146 (tableau de score sportif) | Piste personnalisée | Idée de mutualiser le matériel (audio, afficheur) entre deux notices | Rejetée : deux usages sans rapport, discours de soutenance dilué entre deux messages différents |
| Combinaison P137 (horloge parlante) + afficheur d'informations d'établissement (heure / cours / pause / communiqué) | Piste personnalisée | Combinaison plus cohérente que la précédente (même finalité : informer sur le temps et la vie scolaire), double accessibilité (visuelle et vocale) | Complexité de gestion d'un emploi du temps programmé jugée trop lourde pour le calendrier restant |
| Armoire de rangement sécurisée (badge RFID + code à 4 chiffres + alarme anti-effraction) | Piste personnalisée, hors recueil | Projet très riche (authentification double facteur, verrouillage motorisé, détection d'intrusion), entièrement simulable numériquement (aucun capteur analogique à calibrer) | Écartée en raison du courant élevé demandé par la serrure solénoïde 12 V (risque électrique de conception) et du temps de fabrication d'une structure d'armoire jugé trop long pour le calendrier |
| **Robot Éducatif multi-capteurs** | Piste personnalisée, hors recueil | **Sujet retenu** | — |

## Motifs du choix final

Le Robot Éducatif a été retenu parce qu'il réunit ce que les pistes précédentes offraient séparément :

- **Faisabilité maîtrisée** : un châssis 2 roues + roue folle (motricité et rotation adaptées au suivi de ligne, contrairement à un châssis 4 roues moins précis en virage), une architecture électronique simulable presque entièrement avant fabrication
- **Richesse de compétences** : mécanique (moteurs, driver, châssis), plusieurs familles de capteurs (infrarouge, ultrason, microphone, luminosité), affichage, algorithmique de décision
- **Continuité pédagogique** : le module capteur de son et de lumière réutilise directement les acquis des ateliers du 27 et 28 août (CyberPi, capteur de lumière, mesure sonore), et la logique de décision reprend les mêmes principes que le projet P126 initialement retenu (seuils, moyenne, réaction du dispositif)
- **Objet démontrable en direct** : contrairement à un dispositif installé et invisible dans son fonctionnement quotidien, un robot mobile offre une démonstration immédiate et intuitive devant le jury
