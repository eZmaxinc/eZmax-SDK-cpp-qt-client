/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Branding_AutocompleteElement_Response.h
 *
 * Branding AutocompleteElement Response
 */

#ifndef Branding_AutocompleteElement_Response_H
#define Branding_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Branding_AutocompleteElement_Response : public Object {
public:
    Branding_AutocompleteElement_Response();
    Branding_AutocompleteElement_Response(QString json);
    ~Branding_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSBrandingDescriptionX() const;
    void setSBrandingDescriptionX(const QString &s_branding_description_x);
    bool is_s_branding_description_x_Set() const;
    bool is_s_branding_description_x_Valid() const;

    qint32 getPkiBrandingId() const;
    void setPkiBrandingId(const qint32 &pki_branding_id);
    bool is_pki_branding_id_Set() const;
    bool is_pki_branding_id_Valid() const;

    bool isBBrandingIsactive() const;
    void setBBrandingIsactive(const bool &b_branding_isactive);
    bool is_b_branding_isactive_Set() const;
    bool is_b_branding_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_branding_description_x;
    bool m_s_branding_description_x_isSet;
    bool m_s_branding_description_x_isValid;

    qint32 m_pki_branding_id;
    bool m_pki_branding_id_isSet;
    bool m_pki_branding_id_isValid;

    bool m_b_branding_isactive;
    bool m_b_branding_isactive_isSet;
    bool m_b_branding_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Branding_AutocompleteElement_Response)

#endif // Branding_AutocompleteElement_Response_H
