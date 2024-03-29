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
 * OAIVariableexpense_getList_v1_Response_mPayload_allOf.h
 *
 * 
 */

#ifndef OAIVariableexpense_getList_v1_Response_mPayload_allOf_H
#define OAIVariableexpense_getList_v1_Response_mPayload_allOf_H

#include <QJsonObject>

#include "OAIVariableexpense_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIVariableexpense_ListElement;

class OAIVariableexpense_getList_v1_Response_mPayload_allOf : public OAIObject {
public:
    OAIVariableexpense_getList_v1_Response_mPayload_allOf();
    OAIVariableexpense_getList_v1_Response_mPayload_allOf(QString json);
    ~OAIVariableexpense_getList_v1_Response_mPayload_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIVariableexpense_ListElement> getAObjVariableexpense() const;
    void setAObjVariableexpense(const QList<OAIVariableexpense_ListElement> &a_obj_variableexpense);
    bool is_a_obj_variableexpense_Set() const;
    bool is_a_obj_variableexpense_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIVariableexpense_ListElement> a_obj_variableexpense;
    bool m_a_obj_variableexpense_isSet;
    bool m_a_obj_variableexpense_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIVariableexpense_getList_v1_Response_mPayload_allOf)

#endif // OAIVariableexpense_getList_v1_Response_mPayload_allOf_H
