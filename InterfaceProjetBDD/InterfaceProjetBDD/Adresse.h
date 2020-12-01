#pragma once



    using namespace System::Data;
    using namespace System;

        public ref class Adresse {
    private:
        int id;
        String^ LigneAdresse;
        String^ Pays;
        String^ CP;
        String^ Ville;

    public:
        Adresse();
        Adresse(DataRow^ DR);
        void setID(int);
        int getID();
        void setCP(String^);
        String^ getCP();
        String^ getLigneAdresse();
        void setLigneAdresse(String^ Ladresse);
        String^ getVille();
        void setVille(String^ Ville);
        String^ getPays();
        void setPays(String^ Ville);

    };
