# Guide de reproduction

> Exigence ED-13 · Livrable L10 · doit permettre à un Fab Manager tiers de reproduire
> le dispositif **sans contacter l'équipe**. C'est ce document que vérifie le test ED-14.

## 1. Ce que fait ce dispositif

Un robot à 2 roues, piloté par un ESP32 DevKit, qui détecte automatiquement les obstacles grâce à un capteur à ultrasons et les évite, affiche en continu la distance mesurée et l'état du système sur un écran OLED, et reste pilotable manuellement (avancer, tourner à gauche, tourner à droite, bascule manuel/automatique) par une télécommande infrarouge.

## 2. Outillage et machines requis

| Machine ou outil | Caractéristique minimale | Substitution possible |
|---|---|---|
| Poste de fraisage/gravure de PCB | Compatible avec les fichiers KiCad fournis | Toute machine de gravure/fraisage de circuit imprimé du FabLab |
| Ordinateur avec IDE de programmation | Arduino IDE (ou équivalent supportant l'ESP32) | Tout poste capable de téléverser du firmware sur ESP32 par USB |
| Multimètre | Mesure de tension continue | — |
| Fer à souder | Pour l'assemblage de la carte définitive | — |

## 3. Nomenclature chiffrée


## 4. Fichiers à utiliser, dans l'ordre

| Ordre | Étape | Fichier | Dossier |
|---|---|---|---|
| 1 | Comprendre le besoin et l'architecture | `00-fiche-projet.md` | `docs/` |
| 2 | Consulter la nomenclature | `composants.csv` | `bom/` |
| 3 | Ouvrir le schéma et le routage de la carte | [nom du projet KiCad à préciser] | `hardware/pcb/` |
| 4 | Fabriquer la carte | `fraisage.md` | `hardware/pcb/` |
| 5 | Assembler le châssis et les moteurs | [fichiers CAO du châssis, si produits, sinon notice du kit commercial] | `hardware/cad/` |
| 6 | Compiler et téléverser le firmware | code source ESP32 | `firmware/src/` |
| 7 | Mettre en service | Section 8 ci-dessous | — |

## 5. Paramètres machine

### Découpe laser


### Impression 3D

### Fraisage/gravure de la carte


## 6. Montage, étape par étape

Chaque étape est photographiée. Photos dans `docs/medias/`, ≤ 500 Ko.

1. Souder les composants sur la carte fraisée/gravée, en vérifiant chaque piste au multimètre avant mise sous tension
2. Fixer les moteurs et le driver TB6612FNG sur le châssis
3. Câbler le capteur ultrason, l'écran OLED et le récepteur infrarouge sur la carte
4. Brancher le rail moteur (accumulateurs 7,4 V) **séparément** du rail logique — voir `docs/alimentation.md`, section « masse commune et protections »
5. Vérifier la masse commune avant toute mise sous tension

## 7. Compilation et téléversement du micrologiciel

Renvoi : [`firmware/CONVENTIONS.md`](../firmware/CONVENTIONS.md)

## 8. Mise en service

1. Vérifier que les accumulateurs sont chargés
2. Mettre le robot sous tension : l'écran OLED doit afficher l'état « prêt »
3. Choisir le mode (manuel ou automatique) par la télécommande
4. Placer le robot dans une zone dégagée avant tout essai en mode automatique

## 9. Dépannage — les cinq pannes les plus probables

| Symptôme | Cause probable | Vérification | Correction |
|---|---|---|---|
| 1 | L'écran OLED reste noir | Mauvaise adresse I2C ou câblage SDA/SCL inversé | Vérifier le câblage et l'adresse I2C dans le code | Corriger le câblage ou l'adresse dans le firmware |
| 2 | Le robot ne réagit pas à la télécommande | Récepteur IR mal orienté ou pile de la télécommande faible | Tester avec une télécommande neuve, vérifier l'alignement | Réorienter le récepteur, changer la pile |
| 3 | Le robot ne détecte jamais les obstacles | Capteur ultrason mal câblé ou seuil mal réglé | Relire la distance affichée à l'écran face à un obstacle connu | Vérifier le câblage TRIG/ECHO, ajuster le seuil |
| 4 | Les moteurs ne tournent pas ou tournent faiblement | Accumulateurs déchargés ou rail moteur mal alimenté | Mesurer la tension aux bornes du driver | Recharger les accumulateurs, vérifier le câblage du rail moteur |
| 5 | L'ordinateur redémarre ou se coupe au branchement du montage | Retour de tension USB — voir l'incident du 12 septembre 2026 | Vérifier que les masses sont bien reliées et les rails séparés | Ne jamais tester un nouveau câblage de puissance avec l'ordinateur branché ; voir `docs/04-securite/analyse-risques.md` |
