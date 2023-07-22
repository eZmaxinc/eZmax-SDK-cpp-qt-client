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
 * OAIEzsigntemplatesigner_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplatesigner
 */

#ifndef OAIEzsigntemplatesigner_createObject_v1_Request_H
#define OAIEzsigntemplatesigner_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplatesigner_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatesigner_RequestCompound;

class OAIEzsigntemplatesigner_createObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplatesigner_createObject_v1_Request();
    OAIEzsigntemplatesigner_createObject_v1_Request(QString json);
    ~OAIEzsigntemplatesigner_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplatesigner_RequestCompound> getAObjEzsigntemplatesigner() const;
    void setAObjEzsigntemplatesigner(const QList<OAIEzsigntemplatesigner_RequestCompound> &a_obj_ezsigntemplatesigner);
    bool is_a_obj_ezsigntemplatesigner_Set() const;
    bool is_a_obj_ezsigntemplatesigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplatesigner_RequestCompound> a_obj_ezsigntemplatesigner;
    bool m_a_obj_ezsigntemplatesigner_isSet;
    bool m_a_obj_ezsigntemplatesigner_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatesigner_createObject_v1_Request)

#endif // OAIEzsigntemplatesigner_createObject_v1_Request_H
