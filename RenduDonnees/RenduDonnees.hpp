#ifndef RENDUDONNEES_H
#ifdefine RENDUDONNEES_H

/*!
 * \file RenduDonnees.hpp
 * \brief Traitement des données récupérées sur les membres et l'association
 * \author Groupe A4
 * \version 0.1
 */

/*!
 * \Class RenduDonnes
 * \brief Cette classe défini les méthodes nécessaires à la création des informations qui apparaitront sur les fiches
 */
classe RenduDonnees {
    public :
    /*!
     * \brief Génération des informations présentes sur la fiche d'un membre
     * Cette méthode sert à calculer les indicateurs caractéristiques du membre (satisfaction, motivation...)
     * C'est ces informations qui apparaitront sur la fiche du membre
     */
        virtual static void Generer_membre(Personne pPersonne) =0;

    /*!
     * \brief Génération des informations présentes sur la fiche de l'association
     * A partir des réponses des différents membres, cette méthode dégage des informations générales sur l'association
     */
        virtual static void Generer_Association() =0;
}
#endif
