#include "pch.h"
#include "CL_CAD.h"




CL_CAD::CL_CAD()
{
    this->rq_sql = "RIEN";
    this->credentials = "Data Source=" +
        nomServeur +
        ";" +
        "Initial Catalog=" +
        nomBDD +
        ";" +
        "Persist Security Info=True;" +
        "User ID=" +
        identifiant +
        ";" +
        "Password=" +
        motdepasse;
    this->cnx = gcnew SqlConnection(this->credentials);
    this->CMD = gcnew SqlCommand(this->rq_sql, cnx);
    this->CMD->CommandType = CommandType::Text;

}

void CL_CAD::setSQL(String^ rq_sql)
{
    this->rq_sql = rq_sql;
}
DataSet^ CL_CAD::getRows(String^ rq_sql, String^ dataTableName)
{
    setSQL(rq_sql);
    this->DA = gcnew SqlDataAdapter(this->CMD);
    this->CMD->CommandText = rq_sql;
    DataSet^ DS = gcnew DataSet();
    this->DA->Fill(DS, dataTableName);

    return DS;
}
int CL_CAD::insert(String^ rq_sql)
{
    setSQL(rq_sql);
    this->CMD->CommandText = this->rq_sql;
    this->cnx->Open();
    int res = Convert::ToInt32(this->CMD->ExecuteScalar());
    this->cnx->Close();
    return res;
}
void CL_CAD::update(String^ rq_sql)
{
    setSQL(rq_sql);
    this->CMD->CommandText = this->rq_sql;
    this->cnx->Open();
    this->CMD->ExecuteNonQuery();
    this->cnx->Close();
}
