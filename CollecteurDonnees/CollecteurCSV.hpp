#ifndef COLLECTEURCSV_H
#define COLLECTEURCSV_H

#include <string>
#include "CollecteurDonnees.hpp"

/*!
*\file CollecteurCSV.hpp
*\brief {Définition de la classe permettant de collecter les données à partir d"un fichier CSV}
*\author Groupe A4
*\version 0.1
*\date 7 avril 2020

\class CollecteurCSV
*/
class CollecteurCSV {

    private :
    std::string path;
        
    public :
    /*!
    * \brief Génération d'un membre
    * Permet de collecter les données d'un membre à partir de son nom et de son prénom
    */
        static void Generer_membre( std::string  Nom,  std::string  Prenom);

    /*!
    * \brief Génération des membres
    * Permet de collecter les données de tous les membres
    */
        static void Generer_membres();


    /*!
    * \brief Génération de l'association
    * Permet de collecter les données de l'association en général
    */
         static void Generer_Association();
};
#endif
