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
 * Usergroupexternal_AutocompleteElement_Response.h
 *
 * A Usergroupexternal AutocompleteElement Response
 */

#ifndef Usergroupexternal_AutocompleteElement_Response_H
#define Usergroupexternal_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Usergroupexternal_AutocompleteElement_Response : public Object {
public:
    Usergroupexternal_AutocompleteElement_Response();
    Usergroupexternal_AutocompleteElement_Response(QString json);
    ~Usergroupexternal_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUsergroupexternalId() const;
    void setPkiUsergroupexternalId(const qint32 &pki_usergroupexternal_id);
    bool is_pki_usergroupexternal_id_Set() const;
    bool is_pki_usergroupexternal_id_Valid() const;

    QString getSUsergroupexternalName() const;
    void setSUsergroupexternalName(const QString &s_usergroupexternal_name);
    bool is_s_usergroupexternal_name_Set() const;
    bool is_s_usergroupexternal_name_Valid() const;

    bool isBUsergroupexternalIsactive() const;
    void setBUsergroupexternalIsactive(const bool &b_usergroupexternal_isactive);
    bool is_b_usergroupexternal_isactive_Set() const;
    bool is_b_usergroupexternal_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_usergroupexternal_id;
    bool m_pki_usergroupexternal_id_isSet;
    bool m_pki_usergroupexternal_id_isValid;

    QString m_s_usergroupexternal_name;
    bool m_s_usergroupexternal_name_isSet;
    bool m_s_usergroupexternal_name_isValid;

    bool m_b_usergroupexternal_isactive;
    bool m_b_usergroupexternal_isactive_isSet;
    bool m_b_usergroupexternal_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroupexternal_AutocompleteElement_Response)

#endif // Usergroupexternal_AutocompleteElement_Response_H
