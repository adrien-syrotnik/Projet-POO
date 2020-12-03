#include "pch.h"
#include "VerifVille.h"


VerifVille::VerifVille() {
    connexion = gcnew CL_CAD();
}


String^ VerifVille::Verif(String^ Ville)
{
    String^ tableName = "Liste_Ville_Valide";
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT CodePostal FROM " + tableName + " WHERE Nom = '"+ Ville +"';", tableName);
    

    if (ds->Tables[tableName]->Rows->Count > 0) {
            return Convert::ToString(ds->Tables[tableName]->Rows[0]->ItemArray[0]);
    }
    return "Error";
}