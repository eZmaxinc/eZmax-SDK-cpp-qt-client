/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfolder_createObject_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/ezsignfolder
 */

#ifndef Ezsignfolder_createObject_v2_Response_mPayload_H
#define Ezsignfolder_createObject_v2_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignfolder_createObject_v2_Response_mPayload : public Object {
public:
    Ezsignfolder_createObject_v2_Response_mPayload();
    Ezsignfolder_createObject_v2_Response_mPayload(QString json);
    ~Ezsignfolder_createObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsignfolderId() const;
    void setAPkiEzsignfolderId(const QList<qint32> &a_pki_ezsignfolder_id);
    bool is_a_pki_ezsignfolder_id_Set() const;
    bool is_a_pki_ezsignfolder_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_ezsignfolder_id;
    bool m_a_pki_ezsignfolder_id_isSet;
    bool m_a_pki_ezsignfolder_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfolder_createObject_v2_Response_mPayload)

#endif // Ezsignfolder_createObject_v2_Response_mPayload_H
