//
// Created by marso on 07/04/2020.
//

#ifndef PROJET_C_SESSION_ADMIN_H
#define PROJET_C_SESSION_ADMIN_H

/*!
 * \file Association.hpp
 * \brief Définition d'une association
 * \author Groupe A4
 * \version 0.1
 */

#include <iostream>
#include <string>
#include "Session_Membre.h"
#include "Session.h"
#include "Personne.h"

/*!
 * \Class Association
 * \brief Cette classe défini une association
 * Elle contient un certain nombre de renseignements sur l'association (Nom, lieu du siège...)
 */

class Session_Admin : public Session_Membre{
public:
    /*!
     * \brief Constructeur de la classe association
     * Crée une association "vide", avec aucune information
     */
    void Entrer_donnees(std::string path);
    /*!
     * \brief Constructeur de la classe association
     * Crée une association "vide", avec aucune information
     */
    void Consulter_fiche(Personne pMembre);
    /*!
     * \brief Constructeur de la classe association
     * Crée une association "vide", avec aucune information
     */
    void Ajouter_admin(Session pSession);
};


#endif //PROJET_C_SESSION_ADMIN_H
