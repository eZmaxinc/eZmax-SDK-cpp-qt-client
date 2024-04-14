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
 * Ezsignfoldertype_createObject_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/ezsignfoldertype
 */

#ifndef Ezsignfoldertype_createObject_v2_Response_mPayload_H
#define Ezsignfoldertype_createObject_v2_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignfoldertype_createObject_v2_Response_mPayload : public Object {
public:
    Ezsignfoldertype_createObject_v2_Response_mPayload();
    Ezsignfoldertype_createObject_v2_Response_mPayload(QString json);
    ~Ezsignfoldertype_createObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsignfoldertypeId() const;
    void setAPkiEzsignfoldertypeId(const QList<qint32> &a_pki_ezsignfoldertype_id);
    bool is_a_pki_ezsignfoldertype_id_Set() const;
    bool is_a_pki_ezsignfoldertype_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_ezsignfoldertype_id;
    bool m_a_pki_ezsignfoldertype_id_isSet;
    bool m_a_pki_ezsignfoldertype_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldertype_createObject_v2_Response_mPayload)

#endif // Ezsignfoldertype_createObject_v2_Response_mPayload_H