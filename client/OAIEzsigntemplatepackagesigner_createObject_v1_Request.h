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
 * OAIEzsigntemplatepackagesigner_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplatepackagesigner
 */

#ifndef OAIEzsigntemplatepackagesigner_createObject_v1_Request_H
#define OAIEzsigntemplatepackagesigner_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackagesigner_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackagesigner_RequestCompound;

class OAIEzsigntemplatepackagesigner_createObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplatepackagesigner_createObject_v1_Request();
    OAIEzsigntemplatepackagesigner_createObject_v1_Request(QString json);
    ~OAIEzsigntemplatepackagesigner_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplatepackagesigner_RequestCompound> getAObjEzsigntemplatepackagesigner() const;
    void setAObjEzsigntemplatepackagesigner(const QList<OAIEzsigntemplatepackagesigner_RequestCompound> &a_obj_ezsigntemplatepackagesigner);
    bool is_a_obj_ezsigntemplatepackagesigner_Set() const;
    bool is_a_obj_ezsigntemplatepackagesigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplatepackagesigner_RequestCompound> a_obj_ezsigntemplatepackagesigner;
    bool m_a_obj_ezsigntemplatepackagesigner_isSet;
    bool m_a_obj_ezsigntemplatepackagesigner_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagesigner_createObject_v1_Request)

#endif // OAIEzsigntemplatepackagesigner_createObject_v1_Request_H
