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
 * OAIEzsignsignature_createObject_v2_Request.h
 *
 * Request for POST /2/object/ezsignsignature
 */

#ifndef OAIEzsignsignature_createObject_v2_Request_H
#define OAIEzsignsignature_createObject_v2_Request_H

#include <QJsonObject>

#include "OAIEzsignsignature_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsignature_RequestCompound;

class OAIEzsignsignature_createObject_v2_Request : public OAIObject {
public:
    OAIEzsignsignature_createObject_v2_Request();
    OAIEzsignsignature_createObject_v2_Request(QString json);
    ~OAIEzsignsignature_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignsignature_RequestCompound> getAObjEzsignsignature() const;
    void setAObjEzsignsignature(const QList<OAIEzsignsignature_RequestCompound> &a_obj_ezsignsignature);
    bool is_a_obj_ezsignsignature_Set() const;
    bool is_a_obj_ezsignsignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignsignature_RequestCompound> a_obj_ezsignsignature;
    bool m_a_obj_ezsignsignature_isSet;
    bool m_a_obj_ezsignsignature_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignature_createObject_v2_Request)

#endif // OAIEzsignsignature_createObject_v2_Request_H
