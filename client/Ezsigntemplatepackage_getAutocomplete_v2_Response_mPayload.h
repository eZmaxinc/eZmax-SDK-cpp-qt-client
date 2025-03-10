/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/ezsigntemplatepackage/getAutocomplete
 */

#ifndef Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload_H
#define Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigntemplatepackage_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatepackage_AutocompleteElement_Response;

class Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload();
    Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload(QString json);
    ~Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntemplatepackage_AutocompleteElement_Response> getAObjEzsigntemplatepackage() const;
    void setAObjEzsigntemplatepackage(const QList<Ezsigntemplatepackage_AutocompleteElement_Response> &a_obj_ezsigntemplatepackage);
    bool is_a_obj_ezsigntemplatepackage_Set() const;
    bool is_a_obj_ezsigntemplatepackage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntemplatepackage_AutocompleteElement_Response> m_a_obj_ezsigntemplatepackage;
    bool m_a_obj_ezsigntemplatepackage_isSet;
    bool m_a_obj_ezsigntemplatepackage_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload)

#endif // Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload_H
