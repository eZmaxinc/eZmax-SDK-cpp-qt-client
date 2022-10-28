/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksend_getList_v1_Response_mPayload_allOf.h
 *
 * 
 */

#ifndef OAIEzsignbulksend_getList_v1_Response_mPayload_allOf_H
#define OAIEzsignbulksend_getList_v1_Response_mPayload_allOf_H

#include <QJsonObject>

#include "OAIEzsignbulksend_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignbulksend_ListElement;

class OAIEzsignbulksend_getList_v1_Response_mPayload_allOf : public OAIObject {
public:
    OAIEzsignbulksend_getList_v1_Response_mPayload_allOf();
    OAIEzsignbulksend_getList_v1_Response_mPayload_allOf(QString json);
    ~OAIEzsignbulksend_getList_v1_Response_mPayload_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignbulksend_ListElement> getAObjEzsignbulksend() const;
    void setAObjEzsignbulksend(const QList<OAIEzsignbulksend_ListElement> &a_obj_ezsignbulksend);
    bool is_a_obj_ezsignbulksend_Set() const;
    bool is_a_obj_ezsignbulksend_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignbulksend_ListElement> a_obj_ezsignbulksend;
    bool m_a_obj_ezsignbulksend_isSet;
    bool m_a_obj_ezsignbulksend_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_getList_v1_Response_mPayload_allOf)

#endif // OAIEzsignbulksend_getList_v1_Response_mPayload_allOf_H
