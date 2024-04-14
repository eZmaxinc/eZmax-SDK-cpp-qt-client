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
 * Apikey_ListElement.h
 *
 * A Branding List Element
 */

#ifndef Apikey_ListElement_H
#define Apikey_ListElement_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Apikey_ListElement : public Object {
public:
    Apikey_ListElement();
    Apikey_ListElement(QString json);
    ~Apikey_ListElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiApikeyId() const;
    void setPkiApikeyId(const qint32 &pki_apikey_id);
    bool is_pki_apikey_id_Set() const;
    bool is_pki_apikey_id_Valid() const;

    QString getSApikeyDescriptionX() const;
    void setSApikeyDescriptionX(const QString &s_apikey_description_x);
    bool is_s_apikey_description_x_Set() const;
    bool is_s_apikey_description_x_Valid() const;

    QString getSUserFirstname() const;
    void setSUserFirstname(const QString &s_user_firstname);
    bool is_s_user_firstname_Set() const;
    bool is_s_user_firstname_Valid() const;

    QString getSUserLastname() const;
    void setSUserLastname(const QString &s_user_lastname);
    bool is_s_user_lastname_Set() const;
    bool is_s_user_lastname_Valid() const;

    bool isBApikeyIsactive() const;
    void setBApikeyIsactive(const bool &b_apikey_isactive);
    bool is_b_apikey_isactive_Set() const;
    bool is_b_apikey_isactive_Valid() const;

    bool isBApikeyIssigned() const;
    void setBApikeyIssigned(const bool &b_apikey_issigned);
    bool is_b_apikey_issigned_Set() const;
    bool is_b_apikey_issigned_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_apikey_id;
    bool m_pki_apikey_id_isSet;
    bool m_pki_apikey_id_isValid;

    QString m_s_apikey_description_x;
    bool m_s_apikey_description_x_isSet;
    bool m_s_apikey_description_x_isValid;

    QString m_s_user_firstname;
    bool m_s_user_firstname_isSet;
    bool m_s_user_firstname_isValid;

    QString m_s_user_lastname;
    bool m_s_user_lastname_isSet;
    bool m_s_user_lastname_isValid;

    bool m_b_apikey_isactive;
    bool m_b_apikey_isactive_isSet;
    bool m_b_apikey_isactive_isValid;

    bool m_b_apikey_issigned;
    bool m_b_apikey_issigned_isSet;
    bool m_b_apikey_issigned_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Apikey_ListElement)

#endif // Apikey_ListElement_H