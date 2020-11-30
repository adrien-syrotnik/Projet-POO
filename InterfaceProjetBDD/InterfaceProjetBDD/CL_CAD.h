#pragma once



using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System;
ref class CL_CAD {
private:
    String^ credentials;
    String^ rq_sql;
    SqlConnection^ cnx;
    SqlCommand^ CMD;
    SqlDataAdapter^ DA;
    DataSet^ DS;
    void setSQL(String^ rq_sql);
public:
    CL_CAD(void);
    DataSet^ getRows(String^ rq_sql, String^ dataTableName);
    int insert(String^ rq_sql);
    void update(String^ rq_sql);


    static String^ nomServeur = "LAPTOP-OVB88595\\MSSQLSERVER01";
    static String^ nomBDD = "Prosit 6 BDD";
    static String^ identifiant = "sa2";
    static String^ motdepasse = "azerty123";
};
