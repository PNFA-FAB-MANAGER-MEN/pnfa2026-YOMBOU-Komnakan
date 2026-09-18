# Cahier des charges fonctionnel

> Livrable L3 · Jalon J2. **Mis à jour le 16 septembre 2026** pour refléter le dispositif final (évitement d'obstacle + télécommande infrarouge, sans LED ni suivi de ligne).

## Énoncé du besoin

Le robot rend service aux élèves d'un club de robotique ou d'une classe de technologie qui souhaitent s'initier concrètement à la programmation embarquée et à la mesure physique. Il agit sur son propre déplacement (évitement d'obstacle automatique, pilotage manuel par télécommande) et sur l'affichage en temps réel de la distance mesurée et de l'état du système. Le but est de fournir un support pédagogique réutilisable pour enseigner la logique de décision algorithmique à partir de données de capteur réelles, plutôt qu'à partir d'un exercice sur feuille.

## Fonctions de service et contraintes

| Réf. | Fonction | Critère | Niveau visé | Flexibilité |
|---|---|---|---|---|
| FS1 | Détecter et éviter un obstacle frontal | Distance de détection avant réaction | Seuil réglable, de l'ordre de 15 à 20 cm | Élevée — réglable en code |
| FS2 | Afficher en continu la distance mesurée et l'état du système sur écran | Délai de rafraîchissement de l'affichage | ≤ 1 seconde | Élevée |
| FS3 | Être piloté manuellement par télécommande infrarouge (avancer, tourner à gauche, tourner à droite) | Délai de réponse à une commande | ≤ 0,5 seconde | Faible — nécessaire à la démonstration |
| FS4 | Basculer entre mode manuel et mode automatique par télécommande | Fiabilité de la bascule | 100 % des essais | Faible |
| FC1 | Fonctionner sur une alimentation autonome (accumulateurs) | Autonomie minimale pendant une séance | ≥ 30 minutes d'utilisation continue | Faible |
| FC2 | Séparer l'alimentation de puissance des moteurs de l'alimentation logique | Aucun retour de tension vers l'ordinateur de programmation | 0 incident (exigence tirée de l'incident du 12 septembre 2026) | Aucune — non négociable |
| FC3 | Être pris en main par un élève sans formation préalable | Temps de prise en main | ≤ 10 minutes (exigence EF-04) | Faible |
| FC4 | Rester transportable et de mise en service rapide | Dimensions et temps de mise en service | ≤ 60 × 60 × 60 cm, mise en service ≤ 5 min (exigence EF-05) | Faible |

## Déclinaison des exigences fonctionnelles du programme

| Réf. CDC | Exigence | Déclinaison sur ce projet | Vérification prévue |
|---|---|---|---|
| EF-01 | Intention pédagogique explicite | Initier les élèves à la logique de décision algorithmique et à la mesure physique via un robot à évitement d'obstacle télécommandé | Séquence pédagogique testée sur une autre équipe (`docs/03-sequence-pedagogique/`) |
| EF-02 | Mesure et action sur le monde physique | Chaîne mesure → décision → action : capteur ultrason → logique embarquée → moteurs (évitement) et écran (affichage) ; réception IR → logique embarquée → moteurs (pilotage manuel) | Cahier de tests (`docs/05-tests/`) démontrant chaque chaîne mesure-décision-action |
| EF-03 | Restitution exploitable hors internet | Affichage embarqué sur écran OLED, fonctionnement entièrement autonome, sans connexion réseau nécessaire | Test de fonctionnement complet, connexion internet coupée |
| EF-04 | Prise en main élève ≤ 10 min | Télécommande à boutons simples (avancer, gauche, droite, bascule de mode), comportement du robot immédiatement observable | Test utilisateur chronométré |
| EF-05 | Transportable, ≤ 60 × 60 × 60 cm, mise en service ≤ 5 min | Châssis compact sur accumulateurs, sans branchement secteur nécessaire | Mesure physique du châssis + chronométrage de la mise en service |
