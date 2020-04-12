//
// Created by marso on 07/04/2020.
//

#ifndef PROJET_C_SESSION_CONSULTANT_H
#define PROJET_C_SESSION_CONSULTANT_H

/*!
 * \file Session_Consultant.hpp
 * \brief Définition de la session consultant
 * \author Groupe A4
 * \version 0.1
 */

#include <iostream>
#include <string>
#include "Session.h"
#include "Consultant.h"

/*!
 * \Class Session_Consultant
 * \brief Cette classe défini une Session consultant
 * Cette session est celle qui possède le moins de droit et donc hérite directement de session
 */

class Session_Consultant : public Session {
public:
    /*!
    * \brief Consulter_fiche affiche une fiche
    * Permet d'afficher la fiche du membre à qui appartient la session
    */
    void Consulter_fiche();

private:
    Personne consultant;
};


#endif //PROJET_C_SESSION_CONSULTANT_H
