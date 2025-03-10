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
 * Cors_ResponseCompound.h
 *
 * A Cors Object
 */

#ifndef Cors_ResponseCompound_H
#define Cors_ResponseCompound_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Cors_ResponseCompound : public Object {
public:
    Cors_ResponseCompound();
    Cors_ResponseCompound(QString json);
    ~Cors_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCorsId() const;
    void setPkiCorsId(const qint32 &pki_cors_id);
    bool is_pki_cors_id_Set() const;
    bool is_pki_cors_id_Valid() const;

    qint32 getFkiApikeyId() const;
    void setFkiApikeyId(const qint32 &fki_apikey_id);
    bool is_fki_apikey_id_Set() const;
    bool is_fki_apikey_id_Valid() const;

    QString getSCorsEntryurl() const;
    void setSCorsEntryurl(const QString &s_cors_entryurl);
    bool is_s_cors_entryurl_Set() const;
    bool is_s_cors_entryurl_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_cors_id;
    bool m_pki_cors_id_isSet;
    bool m_pki_cors_id_isValid;

    qint32 m_fki_apikey_id;
    bool m_fki_apikey_id_isSet;
    bool m_fki_apikey_id_isValid;

    QString m_s_cors_entryurl;
    bool m_s_cors_entryurl_isSet;
    bool m_s_cors_entryurl_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Cors_ResponseCompound)

#endif // Cors_ResponseCompound_H
