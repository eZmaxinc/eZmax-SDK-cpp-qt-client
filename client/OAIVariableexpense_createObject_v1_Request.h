/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIVariableexpense_createObject_v1_Request.h
 *
 * Request for POST /1/object/variableexpense
 */

#ifndef OAIVariableexpense_createObject_v1_Request_H
#define OAIVariableexpense_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIVariableexpense_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIVariableexpense_RequestCompound;

class OAIVariableexpense_createObject_v1_Request : public OAIObject {
public:
    OAIVariableexpense_createObject_v1_Request();
    OAIVariableexpense_createObject_v1_Request(QString json);
    ~OAIVariableexpense_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIVariableexpense_RequestCompound> getAObjVariableexpense() const;
    void setAObjVariableexpense(const QList<OAIVariableexpense_RequestCompound> &a_obj_variableexpense);
    bool is_a_obj_variableexpense_Set() const;
    bool is_a_obj_variableexpense_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIVariableexpense_RequestCompound> a_obj_variableexpense;
    bool m_a_obj_variableexpense_isSet;
    bool m_a_obj_variableexpense_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIVariableexpense_createObject_v1_Request)

#endif // OAIVariableexpense_createObject_v1_Request_H
