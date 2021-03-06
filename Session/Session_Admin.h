//
// Created by marso on 07/04/2020.
//

#ifndef PROJET_C_SESSION_ADMIN_H
#define PROJET_C_SESSION_ADMIN_H

/*!
 * \file Session_Admin.hpp
 * \brief Définition de la session administrateur
 * \author Groupe A4
 * \version 0.1
 */

#include <iostream>
#include <string>
#include "Session_Membre.h"
#include "Session.h"
#include "Personne.hpp"

/*!
 * \Class Session_Admin
 * \brief Cette classe défini les session administrateur
 * Les session administrateurs sont celles qui vont permettre de gérer l'application
 */

class Session_Admin : public Session_Membre{
public:
    /*!
     * \ Méthode Entrer_données
     * Permet d'entrer les donnees à partir d'un fichier dont on entre le chemin
     */
    void Entrer_donnees(std::string path);
    /*!
     * \brief Affiche une fiche
     * Affiche la fiche du membre ciblé
     */
    void Consulter_fiche(Personne pMembre);
    /*!
     * \brief Permet l'ajout d'administrateur
     * permet de changer la session choisie en session administrateur
     */
    void Ajouter_admin(Session pSession);
};


#endif //PROJET_C_SESSION_ADMIN_H
