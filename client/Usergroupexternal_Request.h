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
 * Usergroupexternal_Request.h
 *
 * A Usergroupexternal Object
 */

#ifndef Usergroupexternal_Request_H
#define Usergroupexternal_Request_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Usergroupexternal_Request : public Object {
public:
    Usergroupexternal_Request();
    Usergroupexternal_Request(QString json);
    ~Usergroupexternal_Request() override;

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

    QString getSUsergroupexternalId() const;
    void setSUsergroupexternalId(const QString &s_usergroupexternal_id);
    bool is_s_usergroupexternal_id_Set() const;
    bool is_s_usergroupexternal_id_Valid() const;

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

    QString m_s_usergroupexternal_id;
    bool m_s_usergroupexternal_id_isSet;
    bool m_s_usergroupexternal_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroupexternal_Request)

#endif // Usergroupexternal_Request_H
