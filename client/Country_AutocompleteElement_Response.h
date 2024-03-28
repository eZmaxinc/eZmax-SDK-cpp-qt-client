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
 * Country_AutocompleteElement_Response.h
 *
 * A Country AutocompleteElement Response
 */

#ifndef Country_AutocompleteElement_Response_H
#define Country_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Country_AutocompleteElement_Response : public Object {
public:
    Country_AutocompleteElement_Response();
    Country_AutocompleteElement_Response(QString json);
    ~Country_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCountryId() const;
    void setPkiCountryId(const qint32 &pki_country_id);
    bool is_pki_country_id_Set() const;
    bool is_pki_country_id_Valid() const;

    QString getSCountryNameX() const;
    void setSCountryNameX(const QString &s_country_name_x);
    bool is_s_country_name_x_Set() const;
    bool is_s_country_name_x_Valid() const;

    QString getSCountryShortname() const;
    void setSCountryShortname(const QString &s_country_shortname);
    bool is_s_country_shortname_Set() const;
    bool is_s_country_shortname_Valid() const;

    bool isBCountryIsactive() const;
    void setBCountryIsactive(const bool &b_country_isactive);
    bool is_b_country_isactive_Set() const;
    bool is_b_country_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_country_id;
    bool m_pki_country_id_isSet;
    bool m_pki_country_id_isValid;

    QString m_s_country_name_x;
    bool m_s_country_name_x_isSet;
    bool m_s_country_name_x_isValid;

    QString m_s_country_shortname;
    bool m_s_country_shortname_isSet;
    bool m_s_country_shortname_isValid;

    bool m_b_country_isactive;
    bool m_b_country_isactive_isSet;
    bool m_b_country_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Country_AutocompleteElement_Response)

#endif // Country_AutocompleteElement_Response_H
