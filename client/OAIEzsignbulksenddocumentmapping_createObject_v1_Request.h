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
 * OAIEzsignbulksenddocumentmapping_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsignbulksenddocumentmapping
 */

#ifndef OAIEzsignbulksenddocumentmapping_createObject_v1_Request_H
#define OAIEzsignbulksenddocumentmapping_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignbulksenddocumentmapping_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignbulksenddocumentmapping_RequestCompound;

class OAIEzsignbulksenddocumentmapping_createObject_v1_Request : public OAIObject {
public:
    OAIEzsignbulksenddocumentmapping_createObject_v1_Request();
    OAIEzsignbulksenddocumentmapping_createObject_v1_Request(QString json);
    ~OAIEzsignbulksenddocumentmapping_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignbulksenddocumentmapping_RequestCompound> getAObjEzsignbulksenddocumentmapping() const;
    void setAObjEzsignbulksenddocumentmapping(const QList<OAIEzsignbulksenddocumentmapping_RequestCompound> &a_obj_ezsignbulksenddocumentmapping);
    bool is_a_obj_ezsignbulksenddocumentmapping_Set() const;
    bool is_a_obj_ezsignbulksenddocumentmapping_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignbulksenddocumentmapping_RequestCompound> a_obj_ezsignbulksenddocumentmapping;
    bool m_a_obj_ezsignbulksenddocumentmapping_isSet;
    bool m_a_obj_ezsignbulksenddocumentmapping_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksenddocumentmapping_createObject_v1_Request)

#endif // OAIEzsignbulksenddocumentmapping_createObject_v1_Request_H
