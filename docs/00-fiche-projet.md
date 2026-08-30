# Fiche projet P126 : **Indicateur de niveau sonore de classe** - Équipe 20

> Livrable L2 · Jalon J1 (samedi 29 août 2026) · validée par l'encadreur référent.
> Aucune fabrication n'est autorisée avant la validation de ce jalon.

## 1. Indicateur de niveau sonore de classe

Un voyant qui rend le bruit du groupe visible pour que la classe se régule elle-même et une leçon de physique et de mathématiques intégrée

## 2. Besoin et bénéficiaires

Réguler le bruit d'un groupe uniquement par la voix de l'adulte est épuisant pour l'enseignant et peu efficace dans la durée : le rappel au calme devient une tension répétée entre le professeur et la classe. Un indicateur neutre, visible de tous, permet au groupe de constater lui-même son niveau sonore et de s'autoréguler, sans intervention systématique de l'adulte.

- **Élèves concernés** : l'ensemble d'une classe
- **Discipline d'usage** : transversal (vie de classe), avec un ancrage disciplinaire fort en physique-chimie et mathématiques pour l'exploitation pédagogique de la mesure
- **Établissement d'accueil**

## 3. Objectifs d'apprentissage


1. **Mathématiques - Statistiques.** Calculer et interpréter une moyenne glissante à partir d'une série de mesures relevées par le dispositif.
2. **Physique-chimie - Le son.** Expliquer, à partir d'une mesure réelle, pourquoi un doublement de la puissance sonore ne double pas l'indication affichée, et introduire la notion d'échelle logarithmique et de décibel.
3. **Éducation civique et vie de classe.** Argumenter collectivement pour co-construire une règle commune (les seuils de déclenchement), et distinguer une donnée neutre d'un jugement porté sur une personne.


## 4. Description du dispositif

**Ce que l'objet fait** : un microphone numérique mesure en continu le niveau sonore de la salle, moyenné sur quelques secondes pour ne pas réagir à un éclat isolé. Trois voyants (vert / orange / rouge) traduisent ce niveau par rapport à deux seuils réglés avec la classe. Un **bouton Mode Cours**, ajouté par l'équipe, met l'indicateur en pause pendant un cours magistral ou la prise de parole d'un élève interrogé, pour éviter tout faux déclenchement lié à la voix encadrée plutôt qu'au bruit du groupe.

**Ce que l'élève en fait** : il participe à la négociation des seuils en début d'usage, observe l'indicateur pendant les temps de travail de groupe pour l'objectif d'apprentissage.

**Croquis** :

## 5. Architecture technique pressentie

| Élément | Description |
|---|---|
| Capteur | Microphone numérique, avec découplage soigné de son alimentation |
| Traitement | Microcontrôleur : calcul de la moyenne glissante sur quelques secondes, comparaison à 2 seuils, gestion de l'état Mode Cours |
| Actionneurs | 3 voyants LED (vert / orange / rouge) derrière un diffuseur imprimé donnant une lumière large, visible de toute la salle |
| Interface utilisateur | Bouton poussoir Mode Cours (pause / reprise de la mesure) |
| Mémoire | Conservation de la courbe de la séance pour exploitation pédagogique différée |
| Alimentation | Sur secteur |

**Procédés de fabrication envisagés** 

1. Gravure laser fibre MOPA (xTool F2 Ultra) - carte électronique
2. Découpe laser - boîtier
3. Impression 3D - diffuseur de lumière
4. Electronique
5. Programmation

## 6. Rôle des élèves

 - Les élèves co-construisent les seuils de déclenchement avec l'enseignant et exploitent collectivement la courbe conservée pour la leçon sur la moyenne et le décibel.

- un sous-groupe volontaire peut, en physique-chimie, reproduire lui-même une mesure de niveau sonore avec un instrument étalonné et comparer le résultat à l'indication du dispositif, dans une démarche d'investigation qu'il conduit de bout en bout.

## 7. Ancrage réseau et implantation

- **Lab de rattachement** : FabLabs et CRIT
- **Lieu d'usage** : une salle de classe test de l'établissement ou un FabLabs
- **Conditions matérielles** : accès à une prise secteur, niveau sonore ambiant variable selon les créneaux, à prendre en compte lors du calibrage

## 8. Périmètre

| | Contenu |
|---|---|
| Dans la v1.0 (Socle) | Mesure du niveau sonore moyenné, affichage 3 voyants / 2 seuils co-construits avec la classe, bouton Mode Cours, boîtier laser + diffuseur imprimé + socle moulé |
| En option (Avancé / Expert) | Affichage de la courbe de séance sur un petit écran ou tableau de bord logiciel ; activation automatique du Mode Cours par créneau horaire |
| Explicitement exclu | Toute forme de reconnaissance vocale ou d'identification de qui parle ; toute alerte sonore ou punitive déclenchée automatiquement ; connexion réseau ou cloud |
## 9. Risques et parades

| Risque | Type | Parade |
|---|---|---|
| Le dispositif est perçu comme un outil de surveillance/punitif | pédagogique | Co-construire les seuils avec la classe dès la première séance, jamais les imposer |
| Faux déclenchement pendant un cours magistral ou la réponse d'un élève interrogé | technique | Moyenne glissante sur plusieurs secondes + bouton Mode Cours actionné par l'enseignant |
| Fabrication bloquée tant que cette fiche n'est pas validée | calendrier | Soumission de la fiche dès le jalon J1, marge tampon prévue avant le jalon J2 (5 septembre) |
| Le microphone capte le bruit électrique de sa propre alimentation | technique | Découplage soigné de l'alimentation du microphone, test du sous-ensemble isolé avant intégration finale |
| Seuils mal calibrés lors de la première mise en service | technique | Séance de calibrage dédiée avec une classe test avant la mise en service définitive |

## 10. Budget matière estimé

*Grandes masses à chiffrer par l'équipe auprès du magasin du FabLab — plafond indicatif : 60 000 FCFA.*

| Poste | Estimation (FCFA) |
|---|---|
| Composants carte (microcontrôleur, microphone, LED, bouton) | [à chiffrer] |
| Matière plaque (laser — boîtier) | [à chiffrer] |
| Filament impression 3D (diffuseur) | [à chiffrer] |
| Silicone (moulage du socle) | [à chiffrer] |
| Divers / imprévu | [à chiffrer] |
| **Total estimé** | [à chiffrer] |

## 11. Licences et diffusion



Accord de l'équipe pour la mise en avant réseau

## Exemptions demandées

- [ ] ET-FAB-06 (moulage) — non applicable, le moulage silicone est bien prévu dans l'architecture (socle antidérapant)
- [ ] ET-MEC-01 (fonction motorisée) — non applicable, le dispositif ne comporte aucune fonction motorisée
