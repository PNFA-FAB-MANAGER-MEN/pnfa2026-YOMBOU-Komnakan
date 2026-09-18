# Robot Éducatif à évitement d'obstacle télécommandé — Équipe 20

> Un robot à 2 roues qui détecte et évite les obstacles automatiquement, affiche la distance en temps réel sur un écran, et reste pilotable à tout moment par télécommande infrarouge.


**Vidéo de démonstration** : [Video de démonstration ](https://drive.google.com/example-lien-video-fabrication-pcb)


## Intention pédagogique

Technologie / algorithmique — [niveau à préciser], [effectif à préciser] — apprendre à écrire une logique de décision conditionnelle à partir d'une mesure physique réelle (distance), et comprendre le rôle d'un driver moteur dans la séparation des alimentations de puissance et de logique.

Lien : [séquence pédagogique](docs/03-sequence-pedagogique/plan-de-seance.md)

## Architecture

Capteur à ultrasons HC-SR04 → ESP32 DevKit → driver moteur TB6612FNG → moteurs DC. En parallèle : récepteur infrarouge (télécommande) → ESP32 DevKit → pilotage manuel ou bascule de mode. Retour visuel : ESP32 DevKit → écran OLED (distance mesurée, état du système).


## Sommaire du dépôt

| Dossier | Contenu |
|---|---|
| `docs/` | Fiche projet, cahier des charges, journal quotidien, séquence pédagogique, sécurité, alimentation, tests, guide de reproduction |
| `hardware/` | Schéma et routage PCB (KiCad), fichiers de fabrication de la carte |
| `firmware/` | Micrologiciel ESP32 (lecture ultrason, réception infrarouge, pilotage moteur, affichage OLED) |
| `bom/` | Nomenclature complète chiffrée |

## Avancement

| Jalon | Date | État | Release |
|---|---|---|---|
| J0 Lancement | 25/08 | ✅ | — |
| J1 Idée cadrée | 29/08 | ✅ | v0.1 |
| J2 Conception | 05/09 | ✅ | v0.2 |
| J3 Prototype | 12/09 | ✅ | v0.5 |
| J4 Intégration | 16/09 | ✅ | v0.9 |
| Gel du dépôt | 17/09 18 h | ⬜ | v1.0 |

## Reproduire ce dispositif

Renvoi : [guide de reproduction](docs/06-guide-de-reproduction.md) — coût estimé : [à chiffrer] FCFA.

## Licences

- **Logiciel** : MIT — pour permettre la réutilisation libre du firmware par d'autres Fab Managers.
- **Matériel** : [CERN-OHL-S v2, -W ou -P à préciser] — motivation en une phrase.
- **Documentation et médias** : CC BY-SA 4.0 — pour que la documentation reste ouverte et partageable dans le réseau PNFA.

## Crédits et remerciements

Bibliothèques utilisées : réception infrarouge (IRremote ou équivalent), affichage OLED (Adafruit SSD1306 + GFX). INFPP Lomé pour l'accueil du FabLab. [Personnes ressources à ajouter]

---

*Projet intégrateur PNFA 2026-2027 · Certification 1 — Praticien · INFPP / MEN*
