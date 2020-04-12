//
// Created by marsot on 31/03/2020.
//

#ifndef PROJET_C_SESSION_H
#define PROJET_C_SESSION_H

/*!
 * \file Association.hpp
 * \brief Définition d'une association
 * \author Groupe A4
 * \version 0.1
 */

#include <iostream>
#include <string>

/*!
 * \Class Association
 * \brief Cette classe défini une association
 * Elle contient un certain nombre de renseignements sur l'association (Nom, lieu du siège...)
 */

class Session {
private:
    std::string ID;
    std::string Pass;
public:
    /*!
     * \brief Constructeur de la classe association
     * Crée une association "vide", avec aucune information
     */
    bool Connection();
};


#endif //PROJET_C_SESSION_H
