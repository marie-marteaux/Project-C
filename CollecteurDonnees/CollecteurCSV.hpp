#ifndef COLLECTEURCSV_H
#ifdefine COLLECTEURCSV_H

#include "CollecteurDonnees.hpp"

classe CollecteurCSV {

    private :
        String path;
        
    public : 
        virtual static void Generer_membre(String Nom, String Prenom);
        virtual static void Generer_membres();
        virtual static void Generer_Association();
}
#endif
