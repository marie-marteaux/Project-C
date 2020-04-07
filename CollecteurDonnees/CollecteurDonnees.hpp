#ifndef COLLECTEURDONNEES_H
#ifdefine COLLECTEURDONNEES_H

classe CollecteurDonnees {
    public : 
        virtual static void Generer_membre(String Nom, String Prenom) =0;
        virtual static void Generer_membres() =0;
        virtual static void Generer_Association() =0;
}
#endif