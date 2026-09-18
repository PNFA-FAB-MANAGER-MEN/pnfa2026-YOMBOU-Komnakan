# Analyse de risques

> Exigence ES-01 · Livrable L7 · Jalon J3. Couvre la fabrication et l'usage par des élèves.

| Phase | Risque | Type | Gravité | Fréquence | Mesure de prévention retenue |
|---|---|---|---|---|---|
| Fabrication | Retour de tension par le port USB entre l'alimentation de puissance des moteurs et l'ordinateur de programmation, en l'absence de séparation claire des masses — **incident réellement survenu le 12 septembre 2026**, ayant endommagé la puce Super I/O et la carte mère de l'ordinateur utilisé | électrique | Élevée (dégât matériel avéré, hors dispositif) | Occasionnelle (survient lors des premiers tests d'un nouveau driver moteur avant vérification du câblage) | Alimenter le driver moteur (TB6612FNG) par une source dédiée (accumulateurs 7,4 V), jamais depuis l'alimentation USB de l'ordinateur ; ne relier l'ordinateur à la carte ESP32 que par son câble de programmation, avec masse commune reliée en dernier et vérifiée avant toute mise sous tension moteur ; débrancher l'ordinateur du montage pendant les tout premiers essais d'un nouveau câblage de puissance |
| Fabrication | Court-circuit lors du câblage du driver moteur (TB6612FNG) ou de l'écran OLED sur la plaque d'essai | électrique | Moyenne | Occasionnelle | Vérifier le câblage à l'œil et au multimètre avant chaque mise sous tension ; ne jamais laisser un fil dénudé au contact d'un autre point du circuit |
| Fabrication | Inversion de polarité sur les accumulateurs 7,4 V (2 éléments en série) lors du branchement au driver moteur | électrique | Moyenne | Occasionnelle | Repérer et coder visuellement (couleur, détrompeur) les connecteurs d'alimentation moteur avant assemblage final |
| Fabrication | Échauffement du driver moteur ou des moteurs DC en fonctionnement prolongé | thermique | Faible | Occasionnelle | Laisser le montage à l'air libre pendant les essais, ne pas couvrir le driver, couper l'alimentation entre deux séries de tests |
| Usage élève | Pincement des doigts au niveau des roues ou des engrenages du châssis en mouvement | mécanique | Faible | Occasionnelle | Ne jamais toucher les roues pendant que le robot est sous tension ; couper l'alimentation avant toute manipulation manuelle |
| Usage élève | Collision du robot avec un pied ou un objet pendant la démonstration | mécanique | Faible | Occasionnelle | Délimiter une zone de test dégagée ; garder la télécommande à portée de main pour arrêter le robot à tout moment |
| Usage élève | Décharge ou surchauffe des accumulateurs 7,4 V en cas de manipulation incorrecte (court-circuit externe, charge non surveillée) | électrique | Moyenne | Rare | Charger les accumulateurs uniquement sous surveillance d'un adulte, avec un chargeur adapté ; ne jamais laisser un élève manipuler les accumulateurs hors de leur logement |

## Retour d'expérience — incident du 12 septembre 2026

Lors du premier essai du driver moteur monté sur la carte de commande, reliée en même temps à un ordinateur par USB pour la programmation, un retour de tension s'est produit et a endommagé la puce Super I/O ainsi que la carte mère de l'ordinateur, nécessitant son remplacement. La cause identifiée est l'absence de séparation nette entre l'alimentation de puissance des moteurs et l'alimentation logique reliée à l'ordinateur au moment du premier essai. Depuis, le câblage a été entièrement revu pour séparer proprement les masses et les alimentations avant toute nouvelle mise sous tension (voir `docs/alimentation.md`).

## Conformité


## Autorisations de droit à l'image


