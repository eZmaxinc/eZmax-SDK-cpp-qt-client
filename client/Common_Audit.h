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
 * Common_Audit.h
 *
 * Gives informations about the user that created the object and the last user to have modified it.  If the object was never modified after creation, objAuditdetailModified won&#39;t be returned. 
 */

#ifndef Common_Audit_H
#define Common_Audit_H

#include <QJsonObject>

#include "Common_Auditdetail.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Auditdetail;

class Common_Audit : public Object {
public:
    Common_Audit();
    Common_Audit(QString json);
    ~Common_Audit() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Common_Auditdetail getObjAuditdetailCreated() const;
    void setObjAuditdetailCreated(const Common_Auditdetail &obj_auditdetail_created);
    bool is_obj_auditdetail_created_Set() const;
    bool is_obj_auditdetail_created_Valid() const;

    Common_Auditdetail getObjAuditdetailModified() const;
    void setObjAuditdetailModified(const Common_Auditdetail &obj_auditdetail_modified);
    bool is_obj_auditdetail_modified_Set() const;
    bool is_obj_auditdetail_modified_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Common_Auditdetail m_obj_auditdetail_created;
    bool m_obj_auditdetail_created_isSet;
    bool m_obj_auditdetail_created_isValid;

    Common_Auditdetail m_obj_auditdetail_modified;
    bool m_obj_auditdetail_modified_isSet;
    bool m_obj_auditdetail_modified_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Audit)

#endif // Common_Audit_H
