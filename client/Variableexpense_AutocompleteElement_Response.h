/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Variableexpense_AutocompleteElement_Response.h
 *
 * A Variableexpense AutocompleteElement Response
 */

#ifndef Variableexpense_AutocompleteElement_Response_H
#define Variableexpense_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Variableexpense_AutocompleteElement_Response : public Object {
public:
    Variableexpense_AutocompleteElement_Response();
    Variableexpense_AutocompleteElement_Response(QString json);
    ~Variableexpense_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSVariableexpenseDescriptionX() const;
    void setSVariableexpenseDescriptionX(const QString &s_variableexpense_description_x);
    bool is_s_variableexpense_description_x_Set() const;
    bool is_s_variableexpense_description_x_Valid() const;

    qint32 getPkiVariableexpenseId() const;
    void setPkiVariableexpenseId(const qint32 &pki_variableexpense_id);
    bool is_pki_variableexpense_id_Set() const;
    bool is_pki_variableexpense_id_Valid() const;

    bool isBVariableexpenseIsactive() const;
    void setBVariableexpenseIsactive(const bool &b_variableexpense_isactive);
    bool is_b_variableexpense_isactive_Set() const;
    bool is_b_variableexpense_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_variableexpense_description_x;
    bool m_s_variableexpense_description_x_isSet;
    bool m_s_variableexpense_description_x_isValid;

    qint32 m_pki_variableexpense_id;
    bool m_pki_variableexpense_id_isSet;
    bool m_pki_variableexpense_id_isValid;

    bool m_b_variableexpense_isactive;
    bool m_b_variableexpense_isactive_isSet;
    bool m_b_variableexpense_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Variableexpense_AutocompleteElement_Response)

#endif // Variableexpense_AutocompleteElement_Response_H
