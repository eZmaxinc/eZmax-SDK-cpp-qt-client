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
 * OAICommon_Audit.h
 *
 * Gives informations about the user that created the object and the last user to have modified it.  If the object was never modified after creation, objAuditdetailModified won&#39;t be returned. 
 */

#ifndef OAICommon_Audit_H
#define OAICommon_Audit_H

#include <QJsonObject>

#include "OAICommon_Auditdetail.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Auditdetail;

class OAICommon_Audit : public OAIObject {
public:
    OAICommon_Audit();
    OAICommon_Audit(QString json);
    ~OAICommon_Audit() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICommon_Auditdetail getObjAuditdetailCreated() const;
    void setObjAuditdetailCreated(const OAICommon_Auditdetail &obj_auditdetail_created);
    bool is_obj_auditdetail_created_Set() const;
    bool is_obj_auditdetail_created_Valid() const;

    OAICommon_Auditdetail getObjAuditdetailModified() const;
    void setObjAuditdetailModified(const OAICommon_Auditdetail &obj_auditdetail_modified);
    bool is_obj_auditdetail_modified_Set() const;
    bool is_obj_auditdetail_modified_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICommon_Auditdetail obj_auditdetail_created;
    bool m_obj_auditdetail_created_isSet;
    bool m_obj_auditdetail_created_isValid;

    OAICommon_Auditdetail obj_auditdetail_modified;
    bool m_obj_auditdetail_modified_isSet;
    bool m_obj_auditdetail_modified_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Audit)

#endif // OAICommon_Audit_H
