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
 * OAIEzsignfoldersignerassociation_getObject_v1_Response_allOf.h
 *
 * 
 */

#ifndef OAIEzsignfoldersignerassociation_getObject_v1_Response_allOf_H
#define OAIEzsignfoldersignerassociation_getObject_v1_Response_allOf_H

#include <QJsonObject>

#include "OAIObject.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfoldersignerassociation_getObject_v1_Response_allOf : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_getObject_v1_Response_allOf();
    OAIEzsignfoldersignerassociation_getObject_v1_Response_allOf(QString json);
    ~OAIEzsignfoldersignerassociation_getObject_v1_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIObject getMPayload() const;
    void setMPayload(const OAIObject &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIObject m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_getObject_v1_Response_allOf)

#endif // OAIEzsignfoldersignerassociation_getObject_v1_Response_allOf_H
