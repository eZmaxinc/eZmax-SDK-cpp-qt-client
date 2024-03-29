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
 * OAIEzsigntemplateformfieldgroupsigner_Response.h
 *
 * A Ezsigntemplateformfieldgroupsigner Object
 */

#ifndef OAIEzsigntemplateformfieldgroupsigner_Response_H
#define OAIEzsigntemplateformfieldgroupsigner_Response_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplateformfieldgroupsigner_Response : public OAIObject {
public:
    OAIEzsigntemplateformfieldgroupsigner_Response();
    OAIEzsigntemplateformfieldgroupsigner_Response(QString json);
    ~OAIEzsigntemplateformfieldgroupsigner_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateformfieldgroupsignerId() const;
    void setPkiEzsigntemplateformfieldgroupsignerId(const qint32 &pki_ezsigntemplateformfieldgroupsigner_id);
    bool is_pki_ezsigntemplateformfieldgroupsigner_id_Set() const;
    bool is_pki_ezsigntemplateformfieldgroupsigner_id_Valid() const;

    qint32 getFkiEzsigntemplatesignerId() const;
    void setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id);
    bool is_fki_ezsigntemplatesigner_id_Set() const;
    bool is_fki_ezsigntemplatesigner_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplateformfieldgroupsigner_id;
    bool m_pki_ezsigntemplateformfieldgroupsigner_id_isSet;
    bool m_pki_ezsigntemplateformfieldgroupsigner_id_isValid;

    qint32 fki_ezsigntemplatesigner_id;
    bool m_fki_ezsigntemplatesigner_id_isSet;
    bool m_fki_ezsigntemplatesigner_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplateformfieldgroupsigner_Response)

#endif // OAIEzsigntemplateformfieldgroupsigner_Response_H
