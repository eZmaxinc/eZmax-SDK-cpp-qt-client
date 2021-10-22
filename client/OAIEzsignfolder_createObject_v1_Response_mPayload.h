/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_createObject_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsignfolder/createObject API Request
 */

#ifndef OAIEzsignfolder_createObject_v1_Response_mPayload_H
#define OAIEzsignfolder_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfolder_createObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfolder_createObject_v1_Response_mPayload();
    OAIEzsignfolder_createObject_v1_Response_mPayload(QString json);
    ~OAIEzsignfolder_createObject_v1_Response_mPayload() override;

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

    QList<qint32> a_pki_ezsignfolder_id;
    bool m_a_pki_ezsignfolder_id_isSet;
    bool m_a_pki_ezsignfolder_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_createObject_v1_Response_mPayload)

#endif // OAIEzsignfolder_createObject_v1_Response_mPayload_H
