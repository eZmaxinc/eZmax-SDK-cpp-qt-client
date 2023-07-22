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
 * OAIEzsigntsarequirement_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/ezsigntsarequirement/getAutocomplete
 */

#ifndef OAIEzsigntsarequirement_getAutocomplete_v2_Response_mPayload_H
#define OAIEzsigntsarequirement_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntsarequirement_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntsarequirement_AutocompleteElement_Response;

class OAIEzsigntsarequirement_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsigntsarequirement_getAutocomplete_v2_Response_mPayload();
    OAIEzsigntsarequirement_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAIEzsigntsarequirement_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntsarequirement_AutocompleteElement_Response> getAObjEzsigntsarequirement() const;
    void setAObjEzsigntsarequirement(const QList<OAIEzsigntsarequirement_AutocompleteElement_Response> &a_obj_ezsigntsarequirement);
    bool is_a_obj_ezsigntsarequirement_Set() const;
    bool is_a_obj_ezsigntsarequirement_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntsarequirement_AutocompleteElement_Response> a_obj_ezsigntsarequirement;
    bool m_a_obj_ezsigntsarequirement_isSet;
    bool m_a_obj_ezsigntsarequirement_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntsarequirement_getAutocomplete_v2_Response_mPayload)

#endif // OAIEzsigntsarequirement_getAutocomplete_v2_Response_mPayload_H
