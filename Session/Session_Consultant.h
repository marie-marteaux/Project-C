//
// Created by marso on 07/04/2020.
//

#ifndef PROJET_C_SESSION_CONSULTANT_H
#define PROJET_C_SESSION_CONSULTANT_H
#include <iostream>
#include <string>
#include "Session.h"
#include "Consultant.h"


class Session_Consultant : public Session
        {
        private:
            void Consulter_fiche();

        public:
            Personne consultant;
        };


#endif //PROJET_C_SESSION_CONSULTANT_H
