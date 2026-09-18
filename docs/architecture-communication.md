# Architecture de communication

> Exigences ET-COM-01 à ET-COM-03 · Jalon J4.

## Identifiant du dispositif

Dérivé de l'adresse MAC de l'ESP32 DevKit, même si le lien de commande retenu n'est pas un lien réseau — inscrit au plan d'adressage de la promotion.


## Schéma bloc

Télécommande infrarouge → récepteur IR (ESP32) → logique de décision embarquée → driver moteur TB6612FNG → moteurs. En parallèle : capteur ultrason → ESP32 → écran OLED (affichage distance et état).


## Liaison retenue et justification

☒ **Autre : liaison infrarouge unidirectionnelle** (télécommande → récepteur IR embarqué)
☐ MQTT vers tableau de bord local (Node-RED) avec commande retour
☐ ESP-NOW / radio avec nœud secondaire et accusé de réception

**Justification** : le dispositif ne nécessite pas de tableau de bord distant ni de nœud secondaire — c'est un robot autonome et localement télécommandé. La liaison infrarouge est volontairement simple, sans réseau, ce qui satisfait par construction l'exigence de fonctionnement hors internet (EF-03). **Point à valider avec l'encadreur** : cette architecture ne correspond à aucune des deux options cochables du gabarit (MQTT / ESP-NOW) ; à confirmer si une exemption ou une note d'adaptation est nécessaire pour ET-COM-01/02.

## Robustesse (ET-COM-03)

| Situation | Comportement défini |
|---|---|
| Perte de liaison (télécommande hors de portée ou hors ligne de vue) | Le robot ignore les signaux non reçus ; en mode manuel sans nouvelle commande, il s'arrête après un court délai plutôt que de continuer indéfiniment sur la dernière commande reçue *(délai exact à fixer par l'équipe)* |
| Reconnexion | Reprise immédiate dès réception d'un nouveau signal IR valide, aucune procédure d'appairage nécessaire |
| Valeurs par défaut | Au démarrage, le robot est en mode automatique (évitement d'obstacle) tant qu'aucune commande manuelle n'est reçue |
| Période d'émission | Sur événement uniquement (appui sur la télécommande), pas d'émission périodique |

**La démonstration se fait sans internet** — déjà garanti par construction, la liaison IR ne dépendant d'aucune infrastructure réseau.

