/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIFranchisereferalincome_createObject_v2_Response_mPayload.h
 *
 * Payload for the /2/object/franchisereferalincome/createObject API Request
 */

#ifndef OAIFranchisereferalincome_createObject_v2_Response_mPayload_H
#define OAIFranchisereferalincome_createObject_v2_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIFranchisereferalincome_createObject_v2_Response_mPayload : public OAIObject {
public:
    OAIFranchisereferalincome_createObject_v2_Response_mPayload();
    OAIFranchisereferalincome_createObject_v2_Response_mPayload(QString json);
    ~OAIFranchisereferalincome_createObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiFranchisereferalincomeId() const;
    void setAPkiFranchisereferalincomeId(const QList<qint32> &a_pki_franchisereferalincome_id);
    bool is_a_pki_franchisereferalincome_id_Set() const;
    bool is_a_pki_franchisereferalincome_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_pki_franchisereferalincome_id;
    bool m_a_pki_franchisereferalincome_id_isSet;
    bool m_a_pki_franchisereferalincome_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFranchisereferalincome_createObject_v2_Response_mPayload)

#endif // OAIFranchisereferalincome_createObject_v2_Response_mPayload_H