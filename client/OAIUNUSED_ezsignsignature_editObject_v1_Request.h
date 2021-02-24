/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.31
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUNUSED_ezsignsignature_editObject_v1_Request.h
 *
 * Request for the /1/object/ezsignsignature/editObject API Request
 */

#ifndef OAIUNUSED_ezsignsignature_editObject_v1_Request_H
#define OAIUNUSED_ezsignsignature_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignsignature_Request.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUNUSED_ezsignsignature_editObject_v1_Request : public OAIObject {
public:
    OAIUNUSED_ezsignsignature_editObject_v1_Request();
    OAIUNUSED_ezsignsignature_editObject_v1_Request(QString json);
    ~OAIUNUSED_ezsignsignature_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignsignature_Request getObjEzsignsignature() const;
    void setObjEzsignsignature(const OAIEzsignsignature_Request &obj_ezsignsignature);
    bool is_obj_ezsignsignature_Set() const;
    bool is_obj_ezsignsignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignsignature_Request obj_ezsignsignature;
    bool m_obj_ezsignsignature_isSet;
    bool m_obj_ezsignsignature_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUNUSED_ezsignsignature_editObject_v1_Request)

#endif // OAIUNUSED_ezsignsignature_editObject_v1_Request_H