# Cahier de tests

> Exigence ET-FW-04 · Livrable L9 · Jalon J4. Au moins dix cas : nominaux, limites
> et pannes, dont **deux cas de sécurité**. Chaque anomalie majeure correspond à une
> issue GitHub fermée avec sa cause.
>
> Les cas ci-dessous sont définis à partir du comportement attendu du dispositif.
> Les colonnes « Résultat obtenu » et « Verdict » sont à compléter par l'équipe lors de l'exécution réelle des tests.

| # | Type | Cas testé | Résultat attendu | Résultat obtenu | Verdict | Issue |
|---|---|---|---|---|---|---|
| 1 | nominal | Obstacle placé à 50 cm devant le robot en mode automatique | Le robot avance, la distance affichée diminue en continu sur l'OLED | | | |
| 2 | nominal | Obstacle atteignant le seuil réglé (ex. 15 cm) | Le robot déclenche la manœuvre d'évitement, l'écran indique l'état « obstacle » | | | |
| 3 | nominal | Commande « avancer » reçue par télécommande en mode manuel | Le robot avance tant que le bouton est actionné | | | |
| 4 | nominal | Bascule télécommande du mode manuel vers le mode automatique | Le robot reprend la logique d'évitement automatique dès la bascule | | | |
| 5 | limite | Obstacle placé exactement à la distance seuil (ni plus près, ni plus loin) | Comportement cohérent et reproductible (pas d'oscillation entre les deux états) | | | |
| 6 | limite | Obstacle très proche (moins de 2 cm, sous la portée minimale du HC-SR04) | Le robot ne réagit pas de façon erratique ; comportement de repli défini (ex. arrêt) | | | |
| 7 | panne | Capteur ultrason débranché ou en défaut | Le système ne plante pas ; l'écran signale une valeur incohérente ou une erreur plutôt qu'un comportement aléatoire | | | |
| 8 | panne | Aucun signal de télécommande reçu pendant une durée prolongée | Le robot revient à un état défini par défaut (voir `docs/architecture-communication.md`) | | | |
| 9 | sécurité | Alimentation moteur branchée pendant que l'ordinateur est connecté en USB pour la programmation | Aucun retour de tension observé côté ordinateur (test de non-régression suite à l'incident du 12 septembre) | | | |
| 10 | sécurité | Coupure volontaire de l'alimentation pendant un déplacement | Le robot s'arrête immédiatement, aucun comportement dangereux résiduel | | | |

## Relevés de contrôle dimensionnel


## Journal d'endurance
