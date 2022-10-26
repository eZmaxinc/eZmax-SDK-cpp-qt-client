/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIApikey_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/apikey
 */

#ifndef OAIApikey_createObject_v1_Response_mPayload_H
#define OAIApikey_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIApikey_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIApikey_ResponseCompound;

class OAIApikey_createObject_v1_Response_mPayload : public OAIObject {
public:
    OAIApikey_createObject_v1_Response_mPayload();
    OAIApikey_createObject_v1_Response_mPayload(QString json);
    ~OAIApikey_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIApikey_ResponseCompound> getAObjApikey() const;
    void setAObjApikey(const QList<OAIApikey_ResponseCompound> &a_obj_apikey);
    bool is_a_obj_apikey_Set() const;
    bool is_a_obj_apikey_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIApikey_ResponseCompound> a_obj_apikey;
    bool m_a_obj_apikey_isSet;
    bool m_a_obj_apikey_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIApikey_createObject_v1_Response_mPayload)

#endif // OAIApikey_createObject_v1_Response_mPayload_H
