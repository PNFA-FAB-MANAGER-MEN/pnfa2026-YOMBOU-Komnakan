# Plan de séance — 2 heures

> Exigence EP-02 · Livrable L5 · Jalon J2. Reprenable par un tiers.
> La séance doit avoir été testée avec un groupe d'apprenants d'une autre équipe,
> compte rendu versé ci-dessous.


## Matériel quantifié

| Élément | Quantité | Remarque |
|---|---|---|
| Robot éducatif (ESP32 DevKit, ultrason, OLED, TB6612FNG, moteurs) | 1 | Prêt, accumulateurs chargés |
| Télécommande infrarouge | 1 | Piles vérifiées |
| Ordinateur avec l'IDE de programmation installé | 1 | Code de base préchargé |
| Obstacles simples (boîtes en carton) | 3 | Pour les essais d'évitement |
| Cartes de l'activité débranchée | 1 jeu par binôme | Voir `activite-preparatoire.md` |

## Déroulé minuté

| Durée | Phase | Activité de l'enseignant | Activité des élèves | Rôle des élèves (POUR/AVEC/PAR) |
|---|---|---|---|---|
| 15 min | Introduction | Pose la question du besoin : comment un objet peut-il « voir » sans yeux ? | Échangent en binôme, formulent des hypothèses | POUR |
| 20 min | Activité débranchée | Anime l'activité « capteur/programme » à pied (voir `activite-preparatoire.md`) | Miment le capteur et la règle de décision | AVEC |
| 30 min | Découverte du robot | Présente le dispositif réel, démonstration en mode automatique | Observent, formulent le lien avec l'activité précédente | POUR |
| 30 min | Manipulation | Encadre le pilotage par télécommande et la lecture de l'écran | Pilotent à tour de rôle, lisent la distance affichée | PAR |
| 15 min | Modification du seuil | Guide la modification collective du seuil dans le code | Proposent une valeur, observent l'effet | AVEC |
| 10 min | Bilan | Anime la synthèse | Formulent ce qu'ils ont compris | POUR |

## Consignes élèves

- Ne jamais toucher les roues du robot pendant qu'il est sous tension
- Rester en dehors de la zone de test pendant que le robot se déplace
- Couper l'alimentation avant toute manipulation manuelle du robot

## Rôles et organisation du groupe

Binômes tournants sur les rôles : pilote (télécommande), observateur d'écran, rapporteur. Chaque élève passe par les trois rôles sur la durée de la séance.

## Différenciation

Un élève ayant plus de difficulté à lire peut se concentrer sur le rôle de pilote (action directe, retour immédiat du robot) plutôt que sur la lecture de l'écran ou du code.

## Sécurité

Consignes rappelées oralement en début de séance et affichées sur un pictogramme près de la zone de test (exigence ES-04). Le robot est mis hors tension entre chaque manipulation manuelle.

## Bilan et trace écrite

Chaque élève note dans son cahier : le seuil de distance testé, ce qu'il a observé, et une phrase expliquant le principe de mesure du capteur à ultrasons.

## Compte rendu du test avec des pairs

**Date · équipe testeuse · effectif** : [à compléter dès que le test a eu lieu]
**Ce qui a fonctionné** : [à compléter]
**Ce qui a été modifié à la suite du test** : [à compléter]
