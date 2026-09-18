# Bilan de puissance et alimentation

> Exigence ET-ELEC-04 · Livrable L7 · Jalon J3. **Marge ≥ 30 %.**

| Élément | Tension | Courant nominal | Courant de pic | Remarque |
|---|---|---|---|---|
| ESP32 DevKit | 3,3 V (logique, régulée en interne depuis 5 V) | 80 mA | 500 mA | Le pic survient lors des transmissions Wi-Fi/Bluetooth |
| Récepteur infrarouge (télécommande) | 3,3–5 V | 5 mA | 5 mA | |
| Capteur à ultrasons HC-SR04 | 5 V | 15 mA | 15 mA | Sortie ECHO en 5 V logique : nécessite un diviseur de tension avant d'entrer sur une broche ESP32 (3,3 V) |
| Écran OLED I2C (SSD1306) | 3,3–5 V | 20 mA | 30 mA | |
| Driver moteur TB6612FNG — partie logique (VCC) | 3,3–5 V | 5 mA | 10 mA | |
| Driver moteur TB6612FNG — partie puissance (VM) | 7,4 V | — | — | Alimente directement les moteurs, voir ligne suivante |
| Moteur DC (× 2) | 7,4 V (via VM du driver) | 150–250 mA chacun | 800–1000 mA chacun (blocage/démarrage) | Le TB6612FNG supporte 1,2 A continu et 3,2 A crête par canal, largement suffisant |
| **Total rail logique (3,3–5 V)** | | **≈ 110 mA** | **≈ 550 mA** | ESP32 + capteur ultrason + écran OLED + récepteur IR |
| **Total rail moteur (7,4 V)** | | **≈ 300–500 mA** | **jusqu'à ≈ 2 A (les deux moteurs bloqués en même temps)** | Cas rare, mais à couvrir par la marge |

**Source retenue** : ☒ batterie + charge — **2 accumulateurs Li-ion en série, 7,4 V nominal**, dédiés exclusivement à l'alimentation moteur via le driver TB6612FNG.
**Capacité de la source** : [à préciser — capacité en mAh indiquée sur vos accumulateurs]
**Marge calculée** : le TB6612FNG (1,2 A continu / 3,2 A crête par canal) offre une marge largement supérieure à 30 % par rapport au courant de pic estimé (≈ 2 A cumulé sur les deux canaux, soit 1 A par canal en pire cas) — marge disponible ≈ 20 % sur le pic extrême, mais confortable (> 100 %) en fonctionnement normal (≈ 250 mA/canal).

## Masse commune et protections

**Contexte** : le 12 septembre 2026, un retour de tension par le port USB a endommagé la carte mère de l'ordinateur utilisé pour la programmation (voir `docs/04-securite/analyse-risques.md`). Le schéma d'alimentation ci-dessous a été revu pour que cela ne se reproduise plus.

- **Deux rails d'alimentation strictement séparés** : le rail logique (ESP32, capteurs, écran, LED) reste alimenté soit par le câble USB de programmation, soit par une source 5 V régulée — jamais par les accumulateurs moteur directement. Le rail moteur (7,4 V) alimente uniquement l'entrée VM du TB6612FNG.
- **Masse commune obligatoire** : la masse (GND) du rail logique et celle du rail moteur doivent être reliées entre elles au niveau du driver TB6612FNG (c'est ce point commun qui permet à l'ESP32 de piloter le driver), **mais jamais leurs alimentations positives**.
- **Ordre de branchement** : brancher et vérifier la masse commune avant de mettre sous tension le rail moteur ; ne jamais brancher l'ordinateur (USB) en même temps qu'un tout premier essai d'un nouveau câblage de puissance non encore vérifié.
- **Vérification avant chaque mise sous tension** : contrôle visuel du câblage + multimètre, comme désormais indiqué dans `docs/04-securite/analyse-risques.md`.

## Conformité ES-02

Très basse tension seule accessible (≤ 12 V continu — ici 7,4 V maximum). Accumulateurs lithium protégés, inaccessibles aux élèves en dehors de leur logement, chargés selon la règle du réseau et uniquement sous surveillance d'un adulte.