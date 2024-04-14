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
 * Ezsigntsarequirement_AutocompleteElement_Response.h
 *
 * A Ezsigntsarequirement AutocompleteElement Response
 */

#ifndef Ezsigntsarequirement_AutocompleteElement_Response_H
#define Ezsigntsarequirement_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntsarequirement_AutocompleteElement_Response : public Object {
public:
    Ezsigntsarequirement_AutocompleteElement_Response();
    Ezsigntsarequirement_AutocompleteElement_Response(QString json);
    ~Ezsigntsarequirement_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzsigntsarequirementDescriptionX() const;
    void setSEzsigntsarequirementDescriptionX(const QString &s_ezsigntsarequirement_description_x);
    bool is_s_ezsigntsarequirement_description_x_Set() const;
    bool is_s_ezsigntsarequirement_description_x_Valid() const;

    qint32 getPkiEzsigntsarequirementId() const;
    void setPkiEzsigntsarequirementId(const qint32 &pki_ezsigntsarequirement_id);
    bool is_pki_ezsigntsarequirement_id_Set() const;
    bool is_pki_ezsigntsarequirement_id_Valid() const;

    bool isBEzsigntsarequirementIsactive() const;
    void setBEzsigntsarequirementIsactive(const bool &b_ezsigntsarequirement_isactive);
    bool is_b_ezsigntsarequirement_isactive_Set() const;
    bool is_b_ezsigntsarequirement_isactive_Valid() const;

    bool isBDisabled() const;
    void setBDisabled(const bool &b_disabled);
    bool is_b_disabled_Set() const;
    bool is_b_disabled_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_ezsigntsarequirement_description_x;
    bool m_s_ezsigntsarequirement_description_x_isSet;
    bool m_s_ezsigntsarequirement_description_x_isValid;

    qint32 m_pki_ezsigntsarequirement_id;
    bool m_pki_ezsigntsarequirement_id_isSet;
    bool m_pki_ezsigntsarequirement_id_isValid;

    bool m_b_ezsigntsarequirement_isactive;
    bool m_b_ezsigntsarequirement_isactive_isSet;
    bool m_b_ezsigntsarequirement_isactive_isValid;

    bool m_b_disabled;
    bool m_b_disabled_isSet;
    bool m_b_disabled_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntsarequirement_AutocompleteElement_Response)

#endif // Ezsigntsarequirement_AutocompleteElement_Response_H