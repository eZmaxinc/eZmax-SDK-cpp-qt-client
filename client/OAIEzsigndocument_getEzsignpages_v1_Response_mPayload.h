/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_getEzsignpages_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocument}/getEzsignpages
 */

#ifndef OAIEzsigndocument_getEzsignpages_v1_Response_mPayload_H
#define OAIEzsigndocument_getEzsignpages_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignpage_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignpage_ResponseCompound;

class OAIEzsigndocument_getEzsignpages_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigndocument_getEzsignpages_v1_Response_mPayload();
    OAIEzsigndocument_getEzsignpages_v1_Response_mPayload(QString json);
    ~OAIEzsigndocument_getEzsignpages_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignpage_ResponseCompound> getAObjEzsignpage() const;
    void setAObjEzsignpage(const QList<OAIEzsignpage_ResponseCompound> &a_obj_ezsignpage);
    bool is_a_obj_ezsignpage_Set() const;
    bool is_a_obj_ezsignpage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignpage_ResponseCompound> a_obj_ezsignpage;
    bool m_a_obj_ezsignpage_isSet;
    bool m_a_obj_ezsignpage_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_getEzsignpages_v1_Response_mPayload)

#endif // OAIEzsigndocument_getEzsignpages_v1_Response_mPayload_H
