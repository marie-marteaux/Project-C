#ifndef RENDUDONNEES_H
#ifdefine RENDUDONNEES_H

classe RenduDonnees {
    public : 
        virtual static void Generer_membre(Personne pPersonne) =0;
        virtual static void Generer_Association() =0;
}
#endif
