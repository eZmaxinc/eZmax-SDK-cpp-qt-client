/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIVariableexpense_Response.h
 *
 * A Variableexpense Object
 */

#ifndef OAIVariableexpense_Response_H
#define OAIVariableexpense_Response_H

#include <QJsonObject>

#include "OAIField_eVariableexpenseTaxable.h"
#include "OAIMultilingual_VariableexpenseDescription.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_VariableexpenseDescription;

class OAIVariableexpense_Response : public OAIObject {
public:
    OAIVariableexpense_Response();
    OAIVariableexpense_Response(QString json);
    ~OAIVariableexpense_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiVariableexpenseId() const;
    void setPkiVariableexpenseId(const qint32 &pki_variableexpense_id);
    bool is_pki_variableexpense_id_Set() const;
    bool is_pki_variableexpense_id_Valid() const;

    QString getSVariableexpenseCode() const;
    void setSVariableexpenseCode(const QString &s_variableexpense_code);
    bool is_s_variableexpense_code_Set() const;
    bool is_s_variableexpense_code_Valid() const;

    OAIMultilingual_VariableexpenseDescription getObjVariableexpenseDescription() const;
    void setObjVariableexpenseDescription(const OAIMultilingual_VariableexpenseDescription &obj_variableexpense_description);
    bool is_obj_variableexpense_description_Set() const;
    bool is_obj_variableexpense_description_Valid() const;

    OAIField_eVariableexpenseTaxable getEVariableexpenseTaxable() const;
    void setEVariableexpenseTaxable(const OAIField_eVariableexpenseTaxable &e_variableexpense_taxable);
    bool is_e_variableexpense_taxable_Set() const;
    bool is_e_variableexpense_taxable_Valid() const;

    bool isBVariableexpenseIsactive() const;
    void setBVariableexpenseIsactive(const bool &b_variableexpense_isactive);
    bool is_b_variableexpense_isactive_Set() const;
    bool is_b_variableexpense_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_variableexpense_id;
    bool m_pki_variableexpense_id_isSet;
    bool m_pki_variableexpense_id_isValid;

    QString s_variableexpense_code;
    bool m_s_variableexpense_code_isSet;
    bool m_s_variableexpense_code_isValid;

    OAIMultilingual_VariableexpenseDescription obj_variableexpense_description;
    bool m_obj_variableexpense_description_isSet;
    bool m_obj_variableexpense_description_isValid;

    OAIField_eVariableexpenseTaxable e_variableexpense_taxable;
    bool m_e_variableexpense_taxable_isSet;
    bool m_e_variableexpense_taxable_isValid;

    bool b_variableexpense_isactive;
    bool m_b_variableexpense_isactive_isSet;
    bool m_b_variableexpense_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIVariableexpense_Response)

#endif // OAIVariableexpense_Response_H
